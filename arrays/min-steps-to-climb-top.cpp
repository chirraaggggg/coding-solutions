#include <iostream>
#include <vector>

using namespace std;

int minCost(int i, vector<int>& arr){
	if(i >= arr.size()){
		return 0;
	}
	int takeOneStep = minCost(i + 1, arr);

	int takeTwoSteps = minCost(i + 2, arr);

	return arr[i] + min(takeOneStep, takeTwoStep);
}

int main(){
	vector<int> arr = {2, 3, 6};

	int zero = minCost(0, arr);
	int one = minCost(1, arr);

	cout << min(zero, one);

	return 0;
}