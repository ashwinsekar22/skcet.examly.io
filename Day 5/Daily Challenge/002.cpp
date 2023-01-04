/*
2. Given an array of elements, reverse the array
  Array  : 1,2,3,4,5
  Output : 5,4,3,2,1
*/

#include <iostream>
using namespace std;

int main() {
  int arr[100];
  int size = 0;

  for (int i = 0; ; i++) {
    cin >> arr[i];

    if (cin.get() == '\n')
      break;

    size++;
  }

  for (int i = size; i >= 0; i--) {
    cout << arr[i] << ' ';
  }
}
