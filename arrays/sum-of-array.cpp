#include <iostream>
#include <vector>

using namespace std;

int arrSum(vector<int>& arr){
    int sum = 0;
    int n = arr.size();
    
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    vector<int> arr = {1,2,3,4};
    
    cout << "SUM: "<< arrSum(arr) << endl;
    
    return 0;
}