#include <iostream>
using namespace std;

class Voc
{
private:
  char _ch;

public:
  Voc(char ch) // Constructor
  {
    _ch = ch;
  }

  void alph()
  {
    char c = tolower(_ch);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
      cout << _ch << " : Vowel";
    else
      cout << _ch << " : Consonant";
  }
};

int main()
{
  char ch;
  cin >> ch;

  Voc v(ch);
  v.alph();
}