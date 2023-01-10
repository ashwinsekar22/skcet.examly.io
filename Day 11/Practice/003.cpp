#include <iostream>
using namespace std;

class intToRomanConverter
{
private:
    int integer[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string roman_equal[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

public:
    string int_to_Roman(int num)
    {
        string result;

        for (int i = 0; i < 13; i++)
        {
            while (integer[i] <= num)
            {
                result += roman_equal[i];
                num -= integer[i];
            }
        }

        return result;
    }
};

int main()
{
    int num;
    cin >> num;

    intToRomanConverter covt;
    cout << covt.int_to_Roman(num);
}