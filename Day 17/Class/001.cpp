#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int size, num;
    cin >> size;

    vector<int> v;

    for (int i = 0; i < size; i++) {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end(), greater<int>());

    cout << "Sorted:" << endl;
    for (int i = 0; i < size; i++) {
        cout << v[i] << ' ';
    }
}