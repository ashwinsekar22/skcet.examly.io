#include <iostream>
using namespace std;

class Parent {
public:
    int num;

    void fun() {
        int t = num, n = 0;
        int arr[num];
        
        while (t > 0) {
            arr[n++] = t % 10;
            t /= 10;
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                sum += arr[i] + arr[j];
            }
        }

        cout << sum;
    }
};


class Child : public Parent {
public:
    void read() {
        cin >> num;
    }
};


int main () {
    Child ch;
    ch.read();
    ch.fun();
}