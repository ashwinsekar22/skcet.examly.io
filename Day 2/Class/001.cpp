#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int s1,s2,s3,s4,s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    
    float average = (s1 + s2 + s3 + s4 + s5) / 5.f;
    cout << fixed << setprecision(2) << average;
}
