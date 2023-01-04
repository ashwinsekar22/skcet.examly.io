/*
  5. Write a program that accepts a user name and password as input and prints the same
*/

#include <iostream>
using namespace std;

int main() {
  // Declare Variables
  string username, password;

  // Take Input
  cin >> username >> password;

  // Print output with a tab space
  cout << username << '\t' << password;
}
