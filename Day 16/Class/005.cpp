#include <iostream>
#include <fstream>

using std::ofstream;
using namespace std;

int main()
{
    // Code starts from here
    int size, num;
    string str;

    cin >> size;

    ofstream fout;
    fout.open("sample.txt");

    for (int i = 0; i < size; i++) {
        cin >> num;
        fout << num << '\n';
    }

    fout.close();

    ifstream file;
    file.open("sample.txt");

    int arr[size];
    for (int i = 0; i < size; i++) {
        file >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    // Code Ends here

    file.close();
    return 0;
}
