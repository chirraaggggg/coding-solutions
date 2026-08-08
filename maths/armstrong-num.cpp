#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int original = n;
	int sum = 0;
	
	int temp = n;
	int k = 0;
	while(temp > 0){
	    k++;
	    temp /= 10;
	}
	temp = n;
	while(temp > 0){
	    int digit = temp % 10;
	    sum += pow(digit, k);
	    temp /= 10;
	}
	if(sum == original){
	    cout << "Armstrong";
	}
	else{
	    cout << "Not armstrong";
	}
	
	return 0;
}