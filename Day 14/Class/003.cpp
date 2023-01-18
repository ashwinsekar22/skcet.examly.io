#include <iostream>
using namespace std;

class Complex
{

private:
    int real, imag;

public:
    Complex()
    {
        cin >> real >> imag;
    }

    Complex operator+(Complex &obj)
    {
        Complex res;

        res.real = real + obj.real;
        res.imag = imag + obj.imag;

        return res;
    }

    void print()
    {
        cout << real << " + i" << imag;
    }
};

int main()
{
    Complex c1, c2;
    Complex c3 = c1 + c2;
    c3.print();
}