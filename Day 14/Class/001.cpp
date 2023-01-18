#include <iostream>
#include <iomanip>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

float add(float a, float b)
{
    return a + b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    float c, d;
    cin >> c >> d;
    cout << fixed << setprecision(2);
    cout << "Integer:" << add(a, b) << endl;
    cout << "Float:" << add(c, d);
}
