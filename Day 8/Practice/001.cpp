#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int noOfWins = 0;
    int noOfLoses = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '1') noOfWins++;
        else noOfLoses++;
    }

    cout << (noOfWins > noOfLoses ? "Win" : "Lose");
}