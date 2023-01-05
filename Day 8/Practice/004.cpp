#include <iostream>
using namespace std;

int main() {
    string str1, str2;

    cin >> str1 >> str2;
    cout << ((str1.compare(str2) == 0) ? "Strings are same" : "Strings are not same");
}