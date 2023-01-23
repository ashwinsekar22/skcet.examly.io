#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double height, waist;
    cin >> height >> waist;

    double bodyFat = 64 - (20 * (height / waist));
    cout << fixed << setprecision(2) << bodyFat;

    if (2 <= bodyFat && bodyFat <= 5)
        cout << " : Essential fat";
    else if (6 <= bodyFat && bodyFat <= 13)
        cout << " : Athletes";
    else if (14 <= bodyFat && bodyFat <= 17)
        cout << " : Fitness";
    else if (18 <= bodyFat && bodyFat <= 24)
        cout << " : Average";
    else
        cout << " : Obese";
        
}