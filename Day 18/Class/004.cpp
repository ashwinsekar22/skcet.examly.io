#include <iostream>
#include <vector>
using namespace std;

auto printEven = [](vector<int> arr) {
    int size = arr.size();

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << ' ';
        }
    }
};

int main() {
    int size, num;
    cin >> size;

    vector<int> arr;
    for (int i = 0; i < size; i++) {
        cin >> num;
        arr.push_back(num);
    }

    printEven(arr);
}