#include <iostream>
using namespace std;

int main() {
    int date, month, year;
    cin >> date >> month >> year;
    
    int monthCodes[] = {0,3,2,5,0,3,5,1,4,6,2,4};

    if (month < 3)  year--;

    int dayNo = (year + year/4 - year/100 + year/400 + monthCodes[month - 1] + date) % 7;

    switch (dayNo) {
        case 0: cout << "Sunday";   break;
        case 1: cout << "Monday";   break;
        case 2: cout << "Tuesday";  break;
        case 3: cout << "Wednesday";break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday";   break;
        case 6: cout << "Saturday"; break;
    }
}