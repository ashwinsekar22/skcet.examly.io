#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("sample.txt");

    // Start From Here

    string str, txt;
    getline(cin, str);

    fout << str;
    fout.close();

    ifstream fin;
    fin.open("sample.txt");

    getline(fin, txt);

    int count = 0;

    for (char ch : txt)
    {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }

    cout << "Number of vowels in file are " << count;

    // Ends Here

    fin.close();
    return 0;
}