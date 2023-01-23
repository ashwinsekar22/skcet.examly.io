#include <iostream>
using namespace std;

// Lambda Function
auto print = [](int *p, int s) {
    for (int i = 0; i < s; i++) {
        if (*(p+i) % 2 == 0) {
            cout << "The first even number in the list is " << *(p+i) << '.';
            return 1;
        }
    }

    return 0;
};

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    if (!print(arr, size))
        cout << "The list contains no even numbers.";
}