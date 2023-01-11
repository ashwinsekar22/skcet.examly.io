#include <iostream>
#include <iomanip>
using namespace std;

class Distance {
public:
    int _speed, _time;
    Distance(int s, int t) {
        _speed = s;
        _time = t;
    }

    friend int calcDistance(Distance &d);
};

int calcDistance(Distance &d) {
    return d._speed * d._time;
}

int main() {
    int s, t;
    cin >> s >> t;

    Distance d(s,t);
    cout << fixed << setprecision(2) << (float) calcDistance(d);
}