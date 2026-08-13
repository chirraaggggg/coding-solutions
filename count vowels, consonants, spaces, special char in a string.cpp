#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);

    int vowels = 0;
    int consonants = 0;
    int spaces = 0;
    int special = 0;

    for(int i=0; i<s.length(); i++){
        char c = tolower(s[i]);

        if(c=='a' || c=='e' || c=='i'|| c=='o' || c=='u'){
            vowels++;
        }
        else if(c>='a' && c<='z'){
            consonants++;
        }
        else if(c==' '){
            spaces++;
        }
        else{
            special++;
        }
    }
    cout << "vowels: " << vowels << endl;
    cout << "consonants: " << consonants << endl;
    cout << "spaces: " << spaces << endl;
    cout << "special: "<< special << endl;
}