#include <iostream>
using namespace std;

class Professor {
public:
    int _id, _salary;
    string _name;

    Professor(int id, string name, int salary) {
        _id = id;
        _name = name;
        _salary = salary;
    }
    
    void display() {
        if (_salary < 20'000) return;
        cout << _id << ' ' << _name << ' ' << _salary << endl;
    }
};

int main() {
    int id, salary, size;
    string name;

    cin >> size;

    while (size--) {
        cin >> id >> name >> salary;

        Professor p(id, name, salary);
        p.display();
    }
    
}