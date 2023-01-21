#include <iostream>
using namespace std;

struct Student {
  int rn;
  int s[5];
  int avg;
  int grade;

  friend void calculateAverage() {

  }
};

int main() {
  int n;
  cin >> n;

  Student stu;
  cin >> stu.rn;
}