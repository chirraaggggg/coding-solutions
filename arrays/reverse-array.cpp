#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rev(vector<int>& arr){
    reverse(arr.begin(), arr.end());
};
int main(){
	vector<int> arr = {1,2,3,4,5,6,8};

	rev(arr);
	
	for(int x : arr){
	    cout << x << " ";
	}

	return 0;
}