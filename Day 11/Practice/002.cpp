#include <iostream>
using namespace std;

class User
{
private:
    string name, username, password, mobNo;

public:
    User(string name, string username, string password, string mobNo)
    {
        this->name = name;
        this->username = username;
        this->password = password;
        this->mobNo = mobNo;
    }

    string getMobNo() { return mobNo; }

    bool equals(User user)
    {
        return mobNo == user.getMobNo();
    }
};

class Main
{
public:
    void test()
    {
        string n1, n2, u1, u2, p1, p2, m1, m2;

        cin >> n1 >> u1 >> p1 >> m1;
        cin >> n2 >> u2 >> p2 >> m2;

        User user1(n1, u1, p1, m1), user2(n2, u2, p2, m2);

        if (user1.equals(user2))
            cout << "User 1 and User 2 are equal";
        else
            cout << "User 1 and User 2 are not equal";
    }
};

int main()
{
    Main m;
    m.test();
}