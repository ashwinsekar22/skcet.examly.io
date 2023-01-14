#include <iostream>
using namespace std;

class Parent {
public:
    int num;

    void fun() {
        int temp = num;
        int l = 0;

        // Find length of the digit;
        while (temp) {
            temp /= 10;
            l++;
        }

        int arr[l];
        int i = 0;
        temp = num;

        // Get the individual digits and store it in an array;
        while (temp) {
            arr[i++] = temp % 10;
            temp /= 10;
        }

        // Find their sum
        int sum = 0;
        for (int i = 0; i < l; i++) {
            for (int j = i + 1; j < l; j++) {
                sum += arr[i] + arr[j];
            }
        }

        cout << sum;
    }
};

class Main : public Parent {
public:
    Main() {
        cin >> num;
    }

    void fun() {
        Parent::fun();
    }
};

int main() {
    Main m;
    m.fun();
}