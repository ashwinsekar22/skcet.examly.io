#include <iostream>
using namespace std;

class NonNegativeException {};
class NonZeroException {};

class MyCalculator {
public:
    long power(int n, int p)
    {
        try {
            if (n < 0 || p < 0)
                throw NonNegativeException();

            if (n == 0 && p == 0)
                throw NonZeroException();

            int res = 1;
    
            while (p--)
                res *= n;

            return res;
        }

        catch (NonNegativeException err) {
            cout << "n and p should be non-negative";
        }

        catch (NonZeroException err) {
            cout << "Both n and p should not be zero";
        }
        return -1;
    }
};

int main() {
    int n, p;
    cin >> n >> p;

    MyCalculator calc;
    long val = calc.power(n, p);
    if (val != -1)
        cout << val;
}