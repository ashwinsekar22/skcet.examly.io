#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int l = str.length();
    bool isPalindrome = 1;

    for (int i = 0; i < l/2; i++) {
        if (str[i] != str[l - i - 1])
            isPalindrome = 0;
    }

    cout << (isPalindrome ? "Palindrome" : "Not a Palindrome");
}