#include <iostream>
using namespace std;

int main() {
    int maths, physics, chemistry;

    cin >> maths >> physics >> chemistry;
    
    int total = maths + physics + chemistry;
    
    if (maths >= 65 && physics >= 55 && chemistry >= 50 && total >= 180)
        cout << "Congrats. You are eligible";
    else
        cout << "Sorry. You are not eligible";
}