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
    int accno;
    double balance;
    string name;

public:
    savingsAccount() {
        cin >> accno >> name >> balance;
    }

    void display() {
        cout << accno << ' ' << name << ' ' << balance << endl;
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
    int accno, draftlimit;
    double balance;
    string name, city;

public:
    currentAccount() {
        cin >> accno >> name >> balance >> draftlimit >> city;
    }

    void display() {
        cout << accno << ' ' << name << ' ' << balance << ' ' << draftlimit << ' ' << city << endl;
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
    int choice;
    double amount;
    cin >> choice;

    cout << fixed << setprecision(2);

    if (choice == 1) {
        savingsAccount sa;
        sa.display();
        cin >> choice >> amount;

        if (choice == 1) sa.deposit(amount);
        else sa.withdrawl(amount);
        sa.display();
    }

    else {
        currentAccount ca;
        ca.display();
        cin >> choice >> amount;

        if (choice == 1) ca.deposit(amount);
        else ca.withdrawl(amount);
        ca.display();
    }
}