#include <iostream>
using namespace std;

int main() {
    int var1, var2, var3, var4;
    int *a = &var1;
    int *b = &var2;
    int *s = &var3;
    int *n = &var4;
    
    cin >> *a >> *b >> *n;

    for (int i = 2; i < *n; i++) {
        *s = *a + *b;
        *a = *b;
        *b = *s;
    }

    cout << *b;
}