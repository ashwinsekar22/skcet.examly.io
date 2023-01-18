#include <iostream>
using namespace std;

class Hello {
public:
    void sayHello() {
        cout << "Hello" << endl;
    }

    void sayHello(string name) {
        cout << "Hello " << name << endl;
    }
};

int main() {
    string name;
    cin >> name;

    Hello obj;
    obj.sayHello();
    obj.sayHello(name);
}
