#include<bits/stdc++.h>

using namespace std;

int kadaneAlgo(vector<int> arr){
    int i=0,sum=0,mx=INT_MIN;
    while(i<arr.size()){
        sum+=arr[i];
        if(sum<arr[i])sum=arr[i];
        mx=max(sum,mx);
        i++;
    }
    return mx;
}


int main(){
    vector<int> arr{-4,-5,-5,-4,-9,-3,-12};
    cout << kadaneAlgo(arr);
    return 0;
}