#include <bits/stdc++.h>
using namespace std;

int main(){
    float n;
    cin >> n;
    float total = 0;

    for(int i=0; i<n; i++){
        string name;
        float p;
        float q;

        cin >> name >> p >> q;
        total += p*q;
    }
    float avg = total/n;

    cout << avg;
}