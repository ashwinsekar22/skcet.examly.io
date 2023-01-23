#include <iostream>
using namespace std;

int main() {
    long int reg_no;
    cin >> reg_no;
    
    if (reg_no % 10 == 5)
        cout << "Square of " << reg_no << " is " << reg_no * reg_no;
    else
        cout << "Unit digit is not 5";
}