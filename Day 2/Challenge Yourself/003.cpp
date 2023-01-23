#include <iostream>
using namespace std;

int main() {
    int noOfCopiesSold, costPerCopy, costSpentPerCopy;
    cin >> noOfCopiesSold >> costPerCopy >> costSpentPerCopy;
    
    int profit = (costPerCopy - costSpentPerCopy) * noOfCopiesSold - 100;
    cout << profit;
}