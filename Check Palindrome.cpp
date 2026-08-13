#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);

    string temp;
    for(char c : s){
        if(c != ' '){
            c = tolower(c);
            temp += c;
        }
    }
    string rev = temp;
    reverse(rev.begin(), rev.end());
    if(temp == rev){
        cout << "YES;
    }
    else{
        cout << "NO";
    }
}