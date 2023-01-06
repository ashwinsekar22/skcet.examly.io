#include <iostream>
using namespace std;

float convertToSec(int hr, int min, int sec) {
  return (hr * 60 * 60) + (min * 60) + sec;
}

int main() {
  int hr, min, sec;
  cin >> hr >> min >> sec;

  float seconds = convertToSec(hr, min, sec);
  float minutes = seconds / 60;
  float hours = minutes / 60;

  cout << hours << '\n';
  cout << minutes << '\n';
  cout << seconds;
}
