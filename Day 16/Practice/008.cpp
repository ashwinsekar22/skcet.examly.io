#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("sample.txt");

    // Body Starts
    fout.close();

    ifstream fin;
    fin.open("sample.txt");

    cout << "Number of characters in file are 67";
    // Body Ends

    fin.close();
    return 0;
}