#include <iostream>
using namespace std;

class DotException {};
class AtTheRateException {};
class DomainException {};

string validDomains[] = {"in", "com", "net", "biz"};

bool hasValidDomain(string domain) {

    for (int i = 0; i < 4; i++) {
        if (validDomains[i] == domain) {
            return true;
        }
    }

    return false;
}

int main() {
    int noOfAtSymbol = 0;
    int noOfDots = 0;

    string email;
    cin >> email;

    int size = email.size();

    bool isValid = false;

    try {
        int lastDotIndex = 0;

        for (int i = 0; i < size; i++) {
            if (email[i] == '@')
                noOfAtSymbol++;
            else if (email[i] == '.') {
                noOfDots++;
                lastDotIndex = i;
            }

            if (noOfAtSymbol > 1)
                throw AtTheRateException();

            if (noOfDots > 1)
                throw DotException();
        }

        string domain = email.substr(lastDotIndex + 1, size - lastDotIndex);
        if (!hasValidDomain(domain))
            throw DomainException();

        isValid = true;
    }
    
    catch (DotException err) {
        cout << "DotException: Invalid Dot usage" << endl;
    }

    catch (AtTheRateException err) {
        cout << "AtTheRateException: Invalid @ usage" << endl;
    }

    catch (DomainException err) {
        cout << "DomainException: Invalid Domain" << endl;
    }
    
    // One Test Case fails

    cout << (isValid ? "Valid" : "Invalid") << " email address";
}