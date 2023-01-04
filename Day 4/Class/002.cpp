/*
  2. Write a program to fnd the factorial of the given number.
*/

#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  int factorial = 1;

  if (num < 0){
    cout << "Error! Factorial of a negative number doesn't exist.";
    return 0; // Exit out of the function
  }

  while (num) {
    factorial *= num;
    num--;
  }

  cout << factorial;
}
