#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPrime(int n) {
    int count = 0;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int size, num;
    vector<int> v;
    cin >> size;

    if (0 >= size || size > 15) {
        cout << "-1";
        return 0;
    }

    for (int i = 0; i < size; i++) {
        cin >> num;
        v.push_back(num);
    }

    int b[size];
    int *end = remove_copy_if(v.begin(), v.end(), b, isPrime);

    cout << "Composite numbers: ";

    for (int *it = b; it != end; it++) {
        cout << *it << ' ';
    }
}