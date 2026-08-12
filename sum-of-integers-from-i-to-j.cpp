#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j;
    cin >> i >> j;

    if(i >= j || i < 0 || j >= 1000) {
        cout << "invalid" << endl;
        return 0;
    }

    int sum = 0;

    for(int k = i; k <= j; k++) {
        sum += k;
    }

    cout << sum;

    return 0;
}