/*
1. Vikram buys an old scooter for Rs. A and spends Rs. B on its repairs. If he sells the scooter for Rs. C, what is his gain %?

Write a program to compute the gain %
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
  float purchaseCost, repair, sellingPrice;
  cin >> purchaseCost >> repair >> sellingPrice;

  float spent = purchaseCost + repair;
  float gain = ((sellingPrice - spent) / spent) * 100;

  cout << fixed << setprecision(2)  << gain;
}
