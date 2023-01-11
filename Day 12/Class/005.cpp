#include <iostream>
using namespace std;

union Employee {
    int id;
    float salary;
    char name[30], dob[20], doj[20];
};

int main() {
    union Employee emp;

    cin >> emp.id;
    cout << "ID : " << emp.id << endl;

    cin >> emp.name;
    cout << "Name : " << emp.name << endl;

    cin >> emp.dob;
    cout << "DOB : " << emp.dob << endl;

    cin >> emp.doj;
    cout << "DOJ : " << emp.doj << endl;

    cin >> emp.salary;
    cout << "Salary : " << emp.salary;

}