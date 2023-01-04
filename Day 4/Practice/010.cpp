/*
  Question 10:
*/

#include <iostream>
using namespace std;

int main() {
  int start, end;
  int counter = 0;

  cin >> start >> end;

  for (int i = start; i <= end; i++) {
    int noOfDivisors = 2; // 1 and itself;

    for (int j = 2; j < (i / 2) + 1; j++) {
      if (i % j == 0)
        noOfDivisors++;
    }

    if (noOfDivisors == 4)
      counter++;
  }

  cout << counter;
}
