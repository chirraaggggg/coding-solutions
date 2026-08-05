#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=n-2; i>=0; i--){
        bool swapped = false;
        for(int j=0; j<=i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == 0){
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}