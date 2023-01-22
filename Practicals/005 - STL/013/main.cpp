#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int size;
    char ch;
    cin >> size;

    vector<char> v;

    for (int i = 0; i < size; i++) {
        cin >> ch;
        v.push_back(ch);
    }

    cout << "Before sorting: ";
    for (int i = 0; i < size; i++) {
        cout << v[i] << ' ';
    }

    sort(v.begin(), v.end());

    cout << endl << "After sorting: ";
    for (int i = 0; i < size; i++) {
        cout << v[i] << ' ';
    }
}