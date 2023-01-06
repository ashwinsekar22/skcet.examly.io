#include <iostream>
#include <algorithm>
using namespace std;

bool canMakeRightTriangle(int noOfDots) {
  int i = 1;

  while (noOfDots > 0) {
    noOfDots -= i++;
  }

  return noOfDots == 0;
}
int main() {
  int dots;
  cin >> dots;

  if (canMakeRightTriangle(dots))
    cout << "We can create Right Triagle of dots with "<< dots << " dots";
  else
    cout << "We can't create Right Triagle of dots with "<< dots << " dots";
}
