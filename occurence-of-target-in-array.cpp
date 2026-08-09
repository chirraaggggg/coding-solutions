#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int target;
    cin >> target;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1;
}