#include <iostream>
#include <fstream>
using std::ofstream;
using namespace std;

int main() {
    fstream file;
    file.open("sample.txt", ios::out);

    int size;
    cin >> size;

    string str;
    getline(cin, str); // for '\n'
    getline(cin, str);

    file << str;

    file.close();

    ifstream outdata;
    outdata.open("sample.txt");

    int num;
    int sum = 0;

    for (int i = 0; i < size; i++) {
        outdata >> num;
        sum += num;
    }

    cout << sum;
    outdata.close();
    file.close();

    return 0;
}