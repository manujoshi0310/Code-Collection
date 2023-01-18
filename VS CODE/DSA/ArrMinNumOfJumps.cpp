#include<bits/stdc++.h>

using namespace std;

int minNumOfJumps(vector<int> arr, int n){
    int i=0,jmps=0;
    while(i<n-1){
        i+=arr[i];
        jmps++;
    }
    return jmps;
}


int main(){
    vector<int> arr{1, 4, 3, 2, 6, 7};
    cout << minNumOfJumps(arr, arr.size());
    return 0;
}