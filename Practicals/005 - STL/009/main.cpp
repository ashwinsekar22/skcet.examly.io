#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cin >> size;

    if (0 >= size || size > 10) {
        cout << -1;
        return 0;
    }

    int arr1[size], arr2[size], res[size];

    for (int i = 0; i < size; i++)
        cin >> arr1[i];

    for (int i = 0; i < size; i++)
        cin >> arr2[i];

    transform(arr1, arr1+size, arr2, res, plus<int>());

    for (int i = 0; i < size; i++)
        cout << res[i] << ' ';
}