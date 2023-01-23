#include <iostream>
using namespace std;

int main() {
    int noOfStudents, noOfTeams;
    cin >> noOfStudents >> noOfTeams;

    cout << noOfStudents / noOfTeams << '\n';
    cout << noOfStudents % noOfTeams << '\n';
}