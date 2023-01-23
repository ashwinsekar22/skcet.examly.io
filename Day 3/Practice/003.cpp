#include <iostream>
using namespace std;

int main() {
    string day;
    int population;
    cin >> day >> population;
    
    if (population < 0) {
        cout << "Invalid Input";
        return 0;
    }

    if (day == "MON" || day == "TUE" || day == "WED" || day == "THU")
        if (population >= 700 && population <= 1000)
            cout << "Successful";
        else 
            cout << "Unsuccessful";

    else if (day == "FRI" || day == "SUN" || day == "SAT")
        if (population >= 1500)
            cout << "Successful";
        else 
            cout << "Unsuccessful";

    else
        cout << "Invalid Input";
}