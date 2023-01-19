#include <iostream>
#include <iomanip>
using namespace std;

class Account {
public:
    virtual void display() = 0;
    virtual void deposit(double amount) = 0;
    virtual void withdrawl(double amount) = 0;
};

class savingsAccount : public Account {
private:
    int accNo;
    double balance;
    string name;

public:
    savingsAccount() {
        cin >> accNo >> name >> balance;
    }

    void display() {
        cout << accNo << ' ' << name << ' ' << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Balance after deposit:" << balance << endl;
    }

    void withdrawl(double amount) {
        balance -= amount;
        cout << "Balance after withdrawl:" << balance << endl;
    }
};

class currentAccount : public Account {
private:
    int accNo, draftlimit;
    double balance;
    string name, city;

public:
    currentAccount() {
        cin >> accNo >> name >> balance >> draftlimit >> city;
    }
        
    void display() {
        cout << accNo << ' ' << name << ' ' << balance  << ' ' << draftlimit << ' ' << city << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Balance after deposit:" << balance << endl;
    }

    void withdrawl(double amount) {
        balance -= amount;
        cout << "Balance after withdrawl:" << balance << endl;
    }
};


int main() {
    int c1, c2;
    cin >> c1;

    double amount;

    cout << fixed << setprecision(2);

    if (c1 == 1) {
        savingsAccount sa;
        sa.display();

        cin >> c2 >> amount;
        if (c2 == 1) sa.deposit(amount);
        else sa.withdrawl(amount);
        sa.display();
    }

    else {
        currentAccount ca;
        ca.display();

        cin >> c2 >> amount;
        if (c2 == 1) ca.deposit(amount);
        else ca.withdrawl(amount);
        ca.display();
    }
}