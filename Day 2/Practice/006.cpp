#include <iostream>
using namespace std;

int main() {
    int m, n, m1, n1, x, y;
    cin >> m >> n >> m1 >> n1 >> x >> y;
    
    int noOfApples  = m + (m + m1);
    int noOfOranges = n + (n + n1);

    int remApples  = noOfApples  - x;
    int remOranges = noOfOranges - y;
    
    cout << remApples << ' ' << remOranges;
}