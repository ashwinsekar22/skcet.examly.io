#include <iostream>
#include <vector>
using namespace std;

auto sort = [](vector<int> &arr) {
    int s = arr.size();
    for (int i = 0; i < s; i++) {
        for (int j = i + 1; j < s; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
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

    sort(arr);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
}