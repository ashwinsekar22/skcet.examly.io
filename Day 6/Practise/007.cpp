#include <iostream>
using namespace std;

int main() {
    string var;
    string *word = &var;
    cin >> *word;
    cout << *word;
}