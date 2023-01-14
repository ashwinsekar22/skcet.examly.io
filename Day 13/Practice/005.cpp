#include <iostream>
using namespace std;

// Parent Class
class Employee {
public:
    int empId;
};

// Child Class
class Salary : public Employee {
public:
    int working_hours;

    Salary() {
        cin >> empId >> working_hours;
    }
    
    int calculate() {
        return working_hours * 50;
    }

    void display() {
        cout << "Employee Id:" << empId << endl;
        cout << "No. of Hours Worked = " << working_hours << endl;
        cout << "Total Salary = " << calculate();
    }
};

int main() {
    Salary salary;
    salary.display();
}