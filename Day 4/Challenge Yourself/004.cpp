/*
  Question 4: Write a program to facilitate the quiz organizers to fnd the fnal scores of the teams
*/

#include <iostream>
using namespace std;

int main() {
  int a, b, n;
  cin >> a >> b >> n;

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) a *= 2;
    else b *= 2;
  }

  int totalScore = a + b;
  cout << totalScore;
}