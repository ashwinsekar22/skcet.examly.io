#include <iostream>
#include <iomanip>
using namespace std;

class VISACard {
public:
    string holder_name, card_number;

    VISACard() {
        cin >> holder_name >> card_number;
    }

    float compute_reward_points(string purchase_type, int amount) {
        float points = (float) amount / 100;
        return points;
    }

    void display_details() {
        cout << holder_name << '\n' << card_number << '\n';
    }
};

class HPVISACard : public VISACard {
public:
    float compute_reward_points(string purchase_type, int amount) {
        float points = (float) amount / 100;

        if (purchase_type == "Fuel")
            points += 10;

        return points;
    }
};

void display(float points) {
    if (int(points * 100) % 100 == 0)
        cout << fixed << setprecision(1);
    else
        cout << fixed << setprecision(2);

    cout << points;
}

int main() {
    int amount;
    string card_type, purchase_type;
    cin >> card_type;

    float points = 0;

    if (card_type == "VISA") {
        VISACard card;
        cin >> amount >> purchase_type;

        card.display_details();
        display(card.compute_reward_points(purchase_type, amount));
    }

    else if (card_type == "HPVISA") {
        HPVISACard card;
        cin >> amount >> purchase_type;

        card.display_details();
        display(card.compute_reward_points(purchase_type, amount));
    }

    else
        cout << "Invalid Choice";

    return 0;
}
