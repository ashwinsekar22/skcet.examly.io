#include <iostream>
using namespace std;

struct Employee {
    string name, design, dept;
    int emp_no, basicSalary, DA, HRA, PF;

    Employee() {
        cin >> name >> emp_no >> design >> dept >> basicSalary >> DA >> HRA >> PF;
    }

    friend int calculateSalary(Employee &emp);
    friend void display(Employee &emp);
};

int calculateSalary(Employee &emp) {
    return emp.basicSalary + emp.DA + emp.HRA + emp.PF;
}

void display(Employee &emp) {
    cout << "SALARY SLIP" << endl;
    cout << "Employee Name : " << emp.name << endl;
    cout << "Employee Total Salary : " << calculateSalary(emp);
}

int main() {
    Employee emp[10];
    int id;
    cin >> id;

    for (int i = 0; i < 10; i++) {
        if (emp[i].emp_no == id) {
            display(emp[i]);
            return 0;
        }
    }

    cout << "No Records Found for given Employee Number! ";
}