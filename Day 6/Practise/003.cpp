#include <iostream>
using namespace std;

int main() {
    char word[100];
    cin >> word;

    int noOfVowel = 0, noOfConsonant = 0;

    for (char *ch = word; *ch; ch++) {
        if (*ch == 'a' || *ch == 'e' || *ch == 'i' || *ch == 'o' || *ch == 'u')
            noOfVowel++;
        else
            noOfConsonant++;
    }

    cout << noOfVowel << ' ' << noOfConsonant;
}