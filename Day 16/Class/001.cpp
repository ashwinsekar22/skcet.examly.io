#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int pos, num;
    cin >> pos >> num;

    try {
        if (0 <= pos && pos < size)
            arr[pos] = num;
        else
            throw pos;
    } catch (int pos) {
        cout << "vector::_M_range_check: __n (which is "<< pos <<") >= this->size() (which is " << size << ")\n";
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
}