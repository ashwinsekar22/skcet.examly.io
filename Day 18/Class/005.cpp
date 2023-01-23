#include <iostream>
using namespace std;

auto concat = [](string s1, string s2) {
    return s1 + " " + s2;
};

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    string s3 = concat(s1, s2);
    cout << s3;
}