// brute force nested loop solution: tc= O(n^2) sc=O(1)
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
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                cout << i <<" "<<j << endl;
                return 0;
            }
        }
    }
}

// optimal hashmap solution:
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int target;
    cin >> target;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    unordered_map<int, int> map;
    for(int i=0; i<n; i++){
        int rem = target - arr[i];
        if(map.find(rem) != map.end()){
            cout << map[rem] << " " << i << endl;
            return 0;
        }
        map[arr[i]] = i;
    }
    cout << "no pair found";
}