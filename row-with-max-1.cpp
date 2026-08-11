#include<bits/stdc++.h>
using namespace std;

int main(){
    int r;
    int c;
    cin >> r;
    cin >> c;
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }
    }
    int maxCount = 0; //What's the highest number of 1s I've seen so far?
    int maxRow = -1;
    for(int i=0; i<r; i++){
        int count = 0; //How many 1s does THIS row have?
        for(int j=0; j<c; j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
        if(count > maxCount){
                maxCount = count;
                maxRow = i;
            }
    }
    cout << maxRow + 1;

    return 0;
}