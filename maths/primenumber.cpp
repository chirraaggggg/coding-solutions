#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	if(n <= 1){
		cout << "NOT A PRIME NUM" << endl;
		return 0;
	}
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			cout << "NOT A PRIME NUM";
		}
	}
	cout << "PRIME";
}