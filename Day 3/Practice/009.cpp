#include <iostream>
using namespace std;

int main() {
    int n, age;
    cin >> n;

    int noOfBabies = 0;
    int noOfChildren = 0;
    int noOfAdults = 0;
    
    while (n--) {
        cin >> age;
    
        if (age <= 5) noOfBabies++;
        else if (6 <= age && age <= 17) noOfChildren++;
        else noOfAdults++;
    }

    cout << "Baby: " << noOfBabies << endl;
    cout << "Attending school: " << noOfChildren << endl;
    cout << "Adult: " << noOfAdults;
}