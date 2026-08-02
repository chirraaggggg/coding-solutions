#include <iostream>
#include <vector>

using namespace std;

int largest(vector<int>& arr){
	int maxElement = arr[0];
	for(int i = 0; i < arr.size(); i++){
		maxElement = max(maxElement, arr[i]);
	}
	return maxElement;
}
int main(){
	vector<int> arr = {1,2,3,4,5,6,8};

	cout << "max element: " << largest(arr);

	return 0;
}