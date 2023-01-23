#include <iostream>
using namespace std;

int main() {
    int age, ageOfCard, employType, income;
    cin >> age >> ageOfCard >> employType >> income;

    if (
        21 <= age && age <= 60 &&
        ageOfCard >= 18 &&
        1 <= employType && employType <= 4 &&
        income >= 3'00'000
    )
        cout << "Yes. You are eligible for SBI credit cards";
    else
        cout << "No. You are not eligible for SBI credit cards";
}