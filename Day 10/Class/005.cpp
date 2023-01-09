#include <iostream>
#include <algorithm>
using namespace std;

class person
{
private:
  string name, gender;
  int age;

public:
  void read()
  {
    cin >> name >> age >> gender;
  }

  void display()
  {
    transform(name.begin(), name.end(), name.begin(), ::toupper);
    transform(gender.begin(), gender.end(), gender.begin(), ::toupper);
    cout << name << ' ' << age << ' ' << gender;
  }
};

int main(void)
{
  person p;
  p.read();
  p.display();
}