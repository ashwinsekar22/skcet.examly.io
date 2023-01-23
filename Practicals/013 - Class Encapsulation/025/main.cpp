#include <iostream>
using namespace std;

class BMI_Calculator {
private:
    int weight;
    double height;

public:
    void read() {
        cin >> weight >> height;
    }

    char calculate() {
        float bmi = weight / (height * height);

        if (bmi < 18.5)
            return 'U';

        if (18.5 <= bmi && bmi < 25)
            return 'N';

        if (25.0 <= bmi && bmi < 30)
            return 'H';

        return 'O';
    }
};

int main() {
    BMI_Calculator calc;

    calc.read();
    cout << calc.calculate();
}