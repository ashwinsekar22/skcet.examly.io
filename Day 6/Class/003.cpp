#include <iostream>
using namespace std;

int main() {
  int size;
  cin >> size;

  int arr[size];
  
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  int target;
  cin >> target;

  int ptr;

  for (int i = 0; i < size; i++) {
    if (*(arr+i) == target) {
      cout << *(arr+i) << " is found at index " << i;
      return 0;
    }
  }

  cout << "Not found";
}