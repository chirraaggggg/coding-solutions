#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    int n;
    cin >> n;
    
    unordered_map<string, int> mp;
    
    mp["sun"] = 0;
    mp["mon"] = 1;
    mp["tue"] = 2;
    mp["wed"] = 3;
    mp["thu"] = 4;
    mp["fri"] = 5;
    mp["sat"] = 6;
    
    int start = mp[s];
    
    int firstSunday = (7 - start)%7;
    
    if(firstSunday >= n){
        cout << 0;
    }
    else{
        cout << 1 + (n - firstSunday - 1)/7;
    }
    
    return 0;
}