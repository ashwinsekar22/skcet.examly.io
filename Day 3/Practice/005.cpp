#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double yearOfExperience, basicPay;
    cin >> yearOfExperience >> basicPay;
    
    if (yearOfExperience < 1)
        cout << "No Bonus";
    else if (yearOfExperience >= 1 && yearOfExperience < 5)
        cout << "Bonus : Rs.5000";
    else if (yearOfExperience >= 5 && yearOfExperience <= 10)
        cout << "Bonus : Rs.10000";
    else
        cout << "Bonus : Rs." << fixed << setprecision(2) << basicPay * 0.25;

    cout << "\nHappy Diwali";
}