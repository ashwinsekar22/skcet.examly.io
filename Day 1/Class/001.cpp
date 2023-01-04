/*
1. Write a program to print the ASCII value of a character
*/
#include <iostream>
using namespace std;

int main() {
  char ch;
  cin >> ch;
  cout << (int) ch; // short hand method

  /* End */

  /*
    NOTE: Or you can write as follows
  */
  int asciiChar = ch;
  cout << asciiChar;
}