#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string binary = "";
    while(n>0){
        int rem = n%2;
        if(rem == 0){
            binary += "0";
        }
        else{
            binary += "1";
        }
        n = n/2;
    }
    reverse(binary.begin(), binary.end());
    cout << binary;
    return 0;
}