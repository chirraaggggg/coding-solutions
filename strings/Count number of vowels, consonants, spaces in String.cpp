#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int vowels = 0, consonants = 0, spaces = 0;

    for (char ch : str) {
        if (ch == ' ') {
            spaces++;
        }
        else if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "White spaces: " << spaces << endl;

    return 0;
}