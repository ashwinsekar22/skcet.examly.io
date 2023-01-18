#include <iostream>
#include <iomanip>
using namespace std;

class Loan {
public:
    void loadCalc(int amount, int year, float interest) {
        if (year <= 4) { // No interest;
            cout << (float) amount;
            return;
        }
        
        float toBePaid = amount +  (interest / 100) * amount;
        cout << toBePaid;
    }

    void loadCalc(int amount, float interest) {
        float toBePaid = amount +  (interest / 100) * amount;
        cout << toBePaid;
    }
};

int main() {
    int type;
    cin >> type;
    
    cout << fixed << setprecision(1);
    
    int amount, year, interest;

    Loan l;

    cout << "Amount with interest ";

    if (type == 1) {
        cin >> amount >> year >> interest;
        l.loadCalc(amount, year, interest);
    }

    else {
        cin >> amount >> interest;
        l.loadCalc(amount, interest);
    }

    return 0;
}
