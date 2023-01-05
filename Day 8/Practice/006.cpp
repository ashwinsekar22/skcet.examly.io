#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[100], cpyStr[100];
    cin >> str;

    strcpy(cpyStr, str);
    cout << cpyStr;
}