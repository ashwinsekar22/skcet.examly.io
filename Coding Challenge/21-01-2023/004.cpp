#include <iostream>
using namespace std;

class Input {
public:
    int countDigits(int num) {
        int count = 0;

        while (num) {
            num /= 10;
            count++;
        }

        return count;
    }
};

int main() {
    int num;
    cin >> num;
    cout << num << endl;

    Input i;
    cout << i.countDigits(num);
}