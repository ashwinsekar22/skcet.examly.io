#include <iostream>
#include <vector>
using namespace std;

int main() {

  int num;
  cin >> num;

  if (num == 1) return 0;

  vector<int> primeNo;
  primeNo.push_back(2);
  cout << "2 ";

  for (int i = 3; i <= num; i += 2) {
    int j = 0;

    while (j < primeNo.size() && i % primeNo[j++]);
  
    if (j == primeNo.size()) {
      primeNo.push_back(i);
      cout << i << ' ';
    }
  }
}