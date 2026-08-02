#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

vector<int> removeDuplicates(vector<int>& arr){
    vector<int> ret;
    
    for(int i = 0; i<arr.size(); i++){
        if(i == 0){
            ret.push_back(arr[i]);
        }
        else if(arr[i] != arr[i-1]){
            ret.push_back(arr[i]);
        }
    }
    return ret;
}
int main(){
    vector<int> arr = {1,1,2,2,3,3};
    
    vector<int> ans = removeDuplicates(arr);
    for(int x : ans){
        cout << x << " ";   
    }
    return 0;
}