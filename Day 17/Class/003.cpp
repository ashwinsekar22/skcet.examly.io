#include <iostream>
#include <set>
using namespace std;

int main() {
    int size, num;
    cin >> size;

    set<int> s;

    for (int i = 0; i < size; i++) {
        cin >> num;
        s.insert(num);
    }

    set<int>::iterator it;
    int sum = 0;

    for (it = s.begin(); it != s.end(); it++) {
        sum += *it;
    }

    if (size <= 15)
        cout << "Sum of unique elements:" << sum;
    else
        cout << "-1";
}