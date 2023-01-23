#include <iostream>
using namespace std;

int main() {
    int age, gender;
    cin >> age >> gender;

    if (gender != 1 && gender != 2)
        cout << "Invalid";
    else if (age > 0 && age < 25)
        cout << "Group " << gender;
    else if (age >= 25 && age <= 45)
        cout << "Group " << gender + 2;
    else
        cout << "Group 5";
}