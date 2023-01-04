#include <bits/stdc++.h>
using namespace std;

int main() {
  int noOfPassengers, age;
  cin >> noOfPassengers;

  if (noOfPassengers <= 0) {
    cout << "Invalid Input";
    return 0;
  }

  int min = 100, max = 0;

  for (int i = 0; i < noOfPassengers; i++) {
    cin >> age;

    if (age <= 0) {
      cout << "Invalid Input";
      return 0;
    }
    
    if (min > age)
      min = age;
    if (max < age)
      max = age;
  }

  cout << min << ' ' << max;

  return 0;
}