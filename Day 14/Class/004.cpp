
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex() {
        cin >> real >> imag;
    }

    friend ostream &operator<<(ostream &out, Complex &o)
    {
        out << "The complex object is " << o.real << "+i" << o.imag;
    }
};

int main()
{
    Complex c;
    cout << c;
}
