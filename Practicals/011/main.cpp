#include <iostream>
using namespace std;

struct Time {
    int hr, min, sec;

    Time() { cin >> hr >> min >> sec; }
    Time(int h, int m, int s) { hr = h; min = m; sec = s; }

    void display() {
        cout << hr << ":" << min << ":" << sec;
    }

    Time operator-(Time &o) {
        if(o.sec > sec) { --min; sec += 60; }
        int diffSec = sec - o.sec;

        if(o.min > min) { --hr; min += 60; }

        int diffMin = min - o.min;
        int diffHr = hr - o.hr;

        Time t(diffHr, diffMin, diffSec);
        return t;
    }
};

int main() {
    Time t1, t2;
    Time t3 = t1 - t2;
    t3.display();
}