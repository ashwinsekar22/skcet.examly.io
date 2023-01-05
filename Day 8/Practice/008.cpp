#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        int count = 0;
        int oCount = 0;

        for (int j = 0; j < str.length(); j++) {
            if (str[i] == str[j]) count++;
            else oCount++;
        }

        if (count == oCount) {
            cout << str << ":Yes";
            return 0;
        }
    }

    cout << str << ":No";
}