#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double brandExp, travelExp, foodExp, logisticsExp;
    cin >> brandExp >> travelExp >> foodExp >> logisticsExp;
    
    double totalExp = brandExp + travelExp + foodExp + logisticsExp;

    cout << "Total expenses :Rs."
         << fixed << setprecision(2) << totalExp << endl;

    cout << "Branding expenses percentage : "
         << brandExp / totalExp * 100 << '%' << endl;

    cout << "Travel expenses percentage : "
         << travelExp / totalExp * 100 << '%' << endl;

    cout << "Food expenses percentage : "
         << foodExp / totalExp * 100 << '%' << endl;

    cout << "Logistics expenses percentage : "
         << logisticsExp / totalExp * 100 << '%';
}