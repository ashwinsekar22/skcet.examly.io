#include <iostream>
#include <cstring>
using namespace std;

class Base {
public:
    virtual void game() = 0;
};

class Derived {
public:
    string s;

    Derived() {
        getline(cin, s);
    }

    void game() {
        int score = 0;
        
        for (char ch : s) {
            if (isupper(ch))
                score += 10;
            if (islower(ch))
                score -= 5;
        }
        
        cout << "Score : " << score;
    }
};

int main() {
    Derived d;
    d.game();
}