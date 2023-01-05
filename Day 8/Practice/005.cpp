#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int noOfZeros = 0;
    int noOfOnes = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '0') noOfZeros++;
        else noOfOnes++;
    }

    if (noOfZeros == 1 || noOfOnes == 1)
        cout << "Yes";
    else
        cout << "No";
    
}