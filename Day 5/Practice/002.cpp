#include <bits/stdc++.h>
using namespace std;

int main() {
  int noOfToughGuys, temp;
  cin >> noOfToughGuys;

  set<int> friends;

  for (int i = 0; i < noOfToughGuys; i++) {
    cin >> temp;
    friends.insert(temp);
  }

  // Remove all the duplicates days from the array you'll get the answer
  cout << friends.size();

  /* Alter */

  int noOfToughGuys;
  cin >> noOfToughGuys;

  int arr[noOfToughGuys];

  for (int i = 0; i < noOfToughGuys; i++) {
      cin >> arr[i];
  }

  for (int i = 0; i < noOfToughGuys; i++) {
      for (int j = i + 1; j < noOfToughGuys; j++) {
          if (arr[i] == arr[j]) {
              arr[j] = 0;
          }
      }
  }

  int count = 0;
  for (int i = 0; i < noOfToughGuys; i++) {
      if (arr[i] != 0) count++;
  }

  cout << count;


  return 0;
}

