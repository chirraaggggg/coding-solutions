#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int original = n;
    int digits = to_string(n).length();
    int sum = 0;

    for(int temp=n; temp>0; temp /= 10){
        int digit = temp % 10;
        sum += pow(digit, digits);
    }
    if(sum == original){
        cout << "Y";
    }
    else{
        cout << "N";
    }
}