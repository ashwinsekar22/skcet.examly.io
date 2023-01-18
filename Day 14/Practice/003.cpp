#include <iostream>
#include <iomanip>
using namespace std;

class Types {
public:
    void print(int n) {
        cout << n << ' ';
    }

    void print(float n) {
        cout << fixed << setprecision(2) << n << ' ';
    }

    void print(string n) {
        cout << n << ' ';
    }
};

int main() {
    int i;
    float f;
    string s;
    Types t;

    cin >> i >> f >> s;
    t.print(i);
    t.print(f);
    t.print(s);
}