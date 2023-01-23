#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cin >> size;
  
    string *arr = new string[size];

    for (int i = 0; i < size; i++) {
        cin >> *(arr+i);
    }

    sort(arr, arr + size);

    for (int i = 0; i < size; i++) {
        cout << i+1 << ' ' << *(arr+i) << '\n';
    }
}