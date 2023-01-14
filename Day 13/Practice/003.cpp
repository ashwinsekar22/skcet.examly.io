#include <iostream>
using namespace std;

// Parent Class 1
class Person {
public:
    string name;
    int age;

    void display() {
        cout << name << endl << age << endl;
    }
};

// Parent Class 2
class Student {
public:
    string studentId;

    void display() {
        cout << studentId << endl;
    }
};

// Child Class
class Resident : public Person, public Student {
public:
    Resident() {
        cin >> name >> age >> studentId;
    }

    void display() {
        Person::display();
        Student::display();
    }
};

// 1 Test Case Failed
int main() {
    Resident r;
    r.display();
}