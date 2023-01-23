#include <iostream>
#include <iterator> // for iterators
#include <vector>   // for vectors
using namespace std;

int main()
{
    int arr[] = {11, 21, 33, 14, 41, 60, 13, 8, 25, 50};
    int index;
    cin >> index;

    if (1 > index || index > 10)
    {
        cout << -1;
        return 0;
    }

    vector<int> v(arr, arr + 10);
    vector<int>::iterator it = v.begin();
    advance(it, index - 1);

    cout << *it << " * 1 = " << *it * 1 << endl;
    cout << *it << " * 2 = " << *it * 2 << endl;
    cout << *it << " * 3 = " << *it * 3 << endl;
    cout << *it << " * 4 = " << *it * 4 << endl;
    cout << *it << " * 5 = " << *it * 5 << endl;
    cout << *it << " * 6 = " << *it * 6 << endl;
    cout << *it << " * 7 = " << *it * 7 << endl;
    cout << *it << " * 8 = " << *it * 8 << endl;
    cout << *it << " * 9 = " << *it * 9 << endl;
    cout << *it << " * 10 = " << *it * 10;
    return 0;
}