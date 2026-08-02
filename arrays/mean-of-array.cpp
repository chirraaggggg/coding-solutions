#include <iostream>
#include <vector>

using namespace std;

int arrMean(vector<int>& arr){
	int sum = 0;

	for(int i = 0; i<arr.size(); i++){
		sum += arr[i];
	}
	return sum/arr.size();
}
int main(){
	vector<int> arr = {1,2,3,4};
	
	cout << "mean: "<< arrMean(arr);

	return 0;
}