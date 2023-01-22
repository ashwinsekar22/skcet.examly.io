#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int num;
    cin >> num;

    ofstream fout;
    fout.open("sample.txt");
    fout << "[0";

    int prev = 0, next = 1;

    while (--num) {
        fout << ", ";
        fout << next;

        int sum = prev + next;
        prev = next;
        next = sum;
    }

    fout << "]";

    fout.close();

    ifstream fin;
    fin.open("sample.txt");
    string str;
    
    getline(fin, str);
    cout << str;
    fin.close();
}