#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    string type;

    if (number == 0) type = "zero";
    else if (number > 0) type = "positive";
    else type = "negative";

    cout << number << " is " << type;
}