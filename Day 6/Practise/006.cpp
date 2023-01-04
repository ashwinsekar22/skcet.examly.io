#include <iostream>
using namespace std;

int main() {
    int size;
    int nums[size];
    int sum = 0;
    
    cin >> size;
    
    if (size <= 0|| size > 10) {
        cout << "Invalid";
        return 0;
    }

    for (int i = 0; i < size; i++) {
        cin >> *(nums + i);
        sum += *(nums + i);
    }

    cout << sum;
}