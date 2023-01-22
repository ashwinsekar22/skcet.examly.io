#include <iostream>
#include <fstream>
using std::ifstream;
using std::ofstream;
using namespace std;

int main()
{
    fstream file;
    file.open("sample.txt", ios::out);
    int size = 0;

    string line;

    while (true) {
        getline(cin, line);
        if (line == "") break;

        file << line << '\n';
        size++;
    }

    file.close();

    ifstream ifile;
    ifile.open("sample.txt");

    int count = 0;
    cout << "\nFile content: ";

    while (ifile) {
        getline(ifile, line);
        if (line == "") continue;
        cout << line << endl;
        count++;
    }

    cout << "Numbers of lines in the file : " << count;

    file.close();
    ifile.close();

    return 0;
}