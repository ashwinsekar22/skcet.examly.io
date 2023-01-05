#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int noOfVowels = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u')
            noOfVowels++;
    }

    cout << "Number of vowels:" << noOfVowels;
}