#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, j;
    cin >> i >> j;
    int sum = 0;
    for(int k = i; k<=j; k++){
        sum += k;
    }
    cout << sum;
    return 0;
};