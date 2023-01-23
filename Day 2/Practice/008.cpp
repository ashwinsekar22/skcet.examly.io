#include <iostream>
using namespace std;

int main() {
    int noOfChildren, noOfChocolates;
    cin >> noOfChildren >> noOfChocolates;

    string canBuy = (noOfChocolates % noOfChildren == 0) ? "Yes" : "No"; 
    cout << noOfChocolates << ':' << noOfChildren << '-' << canBuy;
}