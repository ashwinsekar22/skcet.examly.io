#include <iostream>
#include <cstring>
using namespace std;

class AgeNotWithinRangeException {};
class NameNotValidException {};

bool hasSymbols(string str) {
    bool hasSymbols = false;

    for (char ch : str) {
        if (!isalpha(ch)) {
            hasSymbols = true;
            break;
        }
    }

    return hasSymbols;
} 

class Student {
public:
    int rno, age;
    string name, course;

    Student(int rno, string name, int age, string course) {
        try {
            if (15 > age || age > 21)
                throw AgeNotWithinRangeException();

            if (hasSymbols(name)) 
                throw NameNotValidException();
    
            this->rno = rno;
            this->name = name;
            this->age = age;
            this->course = course;
        }
        
        catch (AgeNotWithinRangeException err) {
            cout << "Age is not between 15 and 21";
        }

        catch (NameNotValidException err) {
            cout << "Name is not Valid";
        }

        cout << endl << rno << ' ' << name << ' ' << age << ' ' << course;
    }
};

int main() {
    string name, course;
    int rno, age;

    cin >> rno >> name >> age >> course;
    Student s(rno, name, age, course);
}