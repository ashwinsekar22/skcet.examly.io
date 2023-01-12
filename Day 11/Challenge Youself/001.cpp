#include <iostream>
#include <iomanip>
using namespace std;

// Create ItemType class as before consisting of the following private attributes.
class ItemType {
private:
    string name;
    double deposit, costPerDay;

public:
	//Include appropriate getters and setters for the class.
    ItemType() {
        deposit = costPerDay = 0;
    }

    ItemType(string name, double deposit, double costPerDay) {
        this->name = name;
        this->deposit = deposit;
        this->costPerDay = costPerDay;
    }

	// Include default and parameterized constructors for the class.
    string getName() { return name; }
    double getDeposit() { return deposit; }
    double getCostPerDay() { return costPerDay; }
};


// Create a class named ItemTypeBO class
class ItemTypeBO {
public:
    int noOfItems;

    ItemTypeBO(int size) { noOfItems = size; }

	// ItemTypeBO class contains the following methods.
    void search(string search, ItemType itemsArray[]) {
        int index = -1;

        for (int i = 0; i < noOfItems; i++) {
            if (itemsArray[i].getName() == search) {
                index = i;
                break;
            }
        }
        
        if (index != -1) {
            cout << search << ' ' << itemsArray[index].getDeposit() << ' '
                 << itemsArray[index].getCostPerDay() << endl;
        }

        else 
            cout << "Searched item Type not found" << endl;
    }
    
    void display(ItemType itemsArray[]) {
        for (int i = 0; i < noOfItems; i++) {
            cout << itemsArray[i].getName() << ' '
                 << itemsArray[i].getDeposit() << ' '
                 << itemsArray[i].getCostPerDay() << endl;
        }
    }
};

// Create a driver class called Main
class Main {
public:
    Main() {
        string name;
        double deposit, costPerDay;

        int size;
        cin >> size;

        ItemType items[size];

        for (int i = 0; i < size; i++) {
            cin >> name >> deposit >> costPerDay;

            ItemType item(name, deposit, costPerDay);
            items[i] = item;
        }

        string search;
        cin >> search;

		// Display only one digit after a decimal point
        cout << fixed << setprecision(1);

        ItemTypeBO bo(size);
        bo.search(search, items);
        bo.display(items);
    }
};

int main() {
	// NOTE: All class names, attribute names and method names should be the same as specified in the problem statement.
    Main m;
}