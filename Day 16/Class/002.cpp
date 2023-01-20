#include <iostream>
using namespace std;

int main() {
    int age, score;
    cin >> age >> score;
    cout << age << ' ' << score << endl;

    try {
        if (age < 18)
            throw string("Invalid age");

        else if (score < 40)
            throw string("You should get atleast 40 marks");

        cout << "Passed";
    }

    catch (string err) {
        cout << err;
    }
}