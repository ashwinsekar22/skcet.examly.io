#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int noOfAdults, noOfKids, noOfLegs;
    cin >> noOfAdults >> noOfKids >> noOfLegs;

    int noOfAdultsLeg = noOfAdults * 2;
    int noOfKidsLeg = noOfKids * 2;
    int totalLegs = noOfAdultsLeg + noOfKidsLeg;

    if (totalLegs == noOfLegs)
        cout << "yes";
    else
        cout << "no";
}