#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hr, min, sec;
    cin >> hr >> min >> sec;
    
    float timeInSec = hr * 3600 + min * 60 + sec;
    float timeInMin = timeInSec / 60;
    float timeInHrs = timeInMin / 60;
    
    cout << fixed << setprecision(4) << timeInHrs << " hours"   << '\n';
    cout << fixed << setprecision(4) << timeInMin << " minutes" << '\n';
    cout << fixed << setprecision(4) << timeInSec << " seconds";
}