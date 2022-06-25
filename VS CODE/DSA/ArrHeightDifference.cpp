#include<bits/stdc++.h>

using namespace std;

int heightDiffernce(vector<int> arr, int n, int k){
    if(n==0)return arr[0]+k;
    if(arr[n-1]-k>0)return(min(max(arr[n-1]+k,heightDiffernce(arr, n-1, k)),max(arr[n-1]-k,heightDiffernce(arr, n-1, k)))-max(min(arr[n-1]+k,heightDiffernce(arr, n-1, k)),min(arr[n-1]-k,heightDiffernce(arr, n-1, k))));
    else return(max(arr[n-1]+k,heightDiffernce(arr, n-1, k))-min(arr[n-1]+k,heightDiffernce(arr, n-1, k)));
}

int main(){
    vector<int> arr{3, 9, 12, 16, 20};
    cout << heightDiffernce(arr, arr.size(),3);
    return 0;
}