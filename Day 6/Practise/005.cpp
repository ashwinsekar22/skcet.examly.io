#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    int *arr = new int(size);
    for (int i = 0; i < size; i++) {
        cin >> *(arr+i);
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (*(arr+i) < *(arr+j)) {
                int t = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = t;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << *(arr+i) << ' ';
    }
}