#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string nums;

    for(char ch : s) {
        if(ch != '+') {
            nums += ch;
        }
    }

    sort(nums.begin(), nums.end());
    
    for(int i = 0; i < nums.size(); i++){
        if(i > 0) cout << '+';
        cout << nums[i];
    }
}