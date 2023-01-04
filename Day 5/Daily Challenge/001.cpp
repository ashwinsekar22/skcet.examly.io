/*
  1. Count the number of pairs in an integer array whose sum equals the given sum (all elements are unique).
*/

#include <iostream>
using namespace std;

int main() {
  int sum, size;
  cin >> sum >> size;

  int arr[size];

  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  int count = 0;

  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] + arr[j] == sum) {
        count++;
      }
    }
  }

  cout << count;
}