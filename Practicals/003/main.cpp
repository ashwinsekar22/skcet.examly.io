#include <iostream>
using namespace std;

struct DEPT {
    string name;
    int emp_id;
    int yoe; // years_of_experience
    int basic_salary;

    DEPT() {
        cin >> name >> emp_id >> yoe >> basic_salary;
    }

    friend void display(DEPT &dept);
    friend int calculateSalary(DEPT &dept);
};

int calculateSalary(DEPT &dept) {
    if (dept.yoe >= 10)
        return dept.basic_salary + dept.basic_salary * .1;

    if (5 <= dept.yoe && dept.yoe <= 9)
        return dept.basic_salary + dept.basic_salary * .05;

    if (1 <= dept.yoe && dept.yoe <= 4)
        return dept.basic_salary + dept.basic_salary * .02;

    return dept.basic_salary;
}

void display(DEPT &dept) {
    cout << "Employee Name : " << dept.name << endl;
    cout << "Employee Id : " << dept.emp_id << endl;
    cout << "years of experience : " << dept.yoe << endl;
    cout << "salary : " << calculateSalary(dept) << endl;
}

int main() {
    int n;
    cin >> n;

    DEPT dept[n]; // Initializes all the elements from the constructor automatically

    for (int i = 0; i < n; i++) {
        display(dept[i]);
        cout << endl;
    }
}