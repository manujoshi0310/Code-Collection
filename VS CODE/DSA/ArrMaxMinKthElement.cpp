#include<bits/stdc++.h>

using namespace std;

int maxKthElement(vector<int> arr, int k){
    sort(arr.begin(), arr.end(), greater<int>());
    return(arr[k-1]);
}

int minKthElement(vector<int> arr, int k){
    sort(arr.begin(), arr.end());
    return(arr[k-1]);
}

int main(){
    vector<int> arr{1,7,10,20,3,8,5,15,4};
    cout << maxKthElement(arr,3) << " " << minKthElement(arr,5);
    return 0;
}