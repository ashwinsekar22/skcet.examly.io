#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream fout;
    fout.open("sample.txt", ios::out);
    fout << "Hello World\n"; // Initial File content;
    fout.close();

    string str;
    getline(cin, str);

    fstream file;
    file.open("sample.txt", ios::app);
    file << str;
    file.close();

    fstream fin;
    fin.open("sample.txt", ios::in);

    string line;
    int noOfLines = 2;

    while (noOfLines--) {
        getline(fin, line);
        cout << line << endl;
    }
    
    fin.close();
}