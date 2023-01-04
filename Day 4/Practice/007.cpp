/*
  7. Write a program to check whether a given number is a Prime number or not and print all the prime numbers for the range of numbers from a to b.

  (Note: A number said to be a prime number then it must be divisible only itself and 1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int num, start, end, k;
  cin >> num >> start >> end;

  vector<int> primes;
  primes.push_back(2);

  int len = max(num, end);

  for (int i = 3; i <= len; i += 2) {
    int j = 0;
    while (j < primes.size() && i % primes[j++]);
    if (j == primes.size()) primes.push_back(i);
  }

  for (k = 0; k < primes.size(); k++) {
    if (primes[k] == num) break;
  }

  if (k != primes.size())
    cout << num << " is a prime number." << endl;
  else
    cout << num << " is not a prime number." << endl;

  for (int prime: primes) {
    if (start <= prime && prime <= end)
      cout << prime << ' ';
  }
}