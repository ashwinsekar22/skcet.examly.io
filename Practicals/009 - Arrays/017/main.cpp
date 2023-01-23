#include <iostream>
using namespace std;

int main() {
    int size, sum = 0;
    cin >> size;
    
    int *arr = new int(size);

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i += 2) {
        if (arr[i] > arr[i+1]) 
            sum += arr[i+1];
        else
            sum += arr[i];
    }

    cout << sum;
}