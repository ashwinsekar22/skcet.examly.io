#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float noOfWorkingDays;
    float noOfPresent;

    cin >> noOfWorkingDays >> noOfPresent;

    float percent = (noOfPresent / noOfWorkingDays) * 100;
    cout << trunc(percent) << '%';
}