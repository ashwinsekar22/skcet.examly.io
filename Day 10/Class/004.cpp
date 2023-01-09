#include <iostream>
using namespace std;

class dayOfWeek
{
private:
  int d;
  string days[8] = {
      "Weekend",
      "Sunday",
      "Monday",
      "Tuesday",
      "Wednesday",
      "Thursday",
      "Friday",
      "Saturday"};

public:
  void read()
  {
    cin >> d;
  }

  void display()
  {
    if (d > 7)
    {
      cout << "Invalid";
      return;
    }

    cout << days[d];
  }
};

int main()
{
  dayOfWeek d;
  d.read();
  d.display();
}