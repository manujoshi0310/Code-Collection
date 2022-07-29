#include<bits/stdc++.h>

using namespace std;

int maxSubarr(vector<int> arr, int k){
    int i=0,j=0,sum=0,mx=INT_MIN;
    while(j<arr.size()){
        sum+=arr[j];
        if(j-i+1<k) j++;
        else if(j-i+1==k){
            mx=max(mx,sum);
            sum = sum - arr[i];
            i++;
            j++;
        }
    }
    return mx;
}

int main(){
    vector<int> arr{2,3,5,2,9,7,1};
    cout << maxSubarr(arr, 3);
    return 0;
}