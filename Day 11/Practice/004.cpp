#include <iostream>

using namespace std;

class Occurrence
{
public:
    int countOccurrence(string &str, char target)
    {
        int count = 0;

        for (char ch : str)
        {
            if (ch == target)
                count++;
        }

        return count;
    }
};

int main()
{
    string s;
    char ch;
    cin >> s >> ch;

    Occurrence o;
    cout << o.countOccurrence(s, ch);
}