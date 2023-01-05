#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    cout << "String with lowercase is ";

    for (int i = 0; i < str.length(); i++) {
        if ('A' <= str[i] && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    cout << str;
}