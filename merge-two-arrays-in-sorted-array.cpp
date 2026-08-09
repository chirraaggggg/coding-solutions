#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> A(n), B(m);
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    for(int j=0; j<m; j++){
        cin >> B[j];
    }
    reverse(B.begin(), B.end());
    
    vector<int> res;
    int i = 0;
    int j = 0;
    
    while(i<n && j<m){
        if(A[i] < B[j]){
            res.push_back(A[i]);
            i++;
        }
        else{
            res.push_back(B[j]);
            j++;
        }
    }
    while(i<n){
        res.push_back(A[i]);
        i++;
    }
    while(j<m){
        res.push_back(B[j]);
        j++;
    }
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }
}