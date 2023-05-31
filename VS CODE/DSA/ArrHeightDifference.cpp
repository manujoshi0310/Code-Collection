#include<bits/stdc++.h>

using namespace std;

int heightDiffernce(vector<int> arr, int n, int k){
    sort(arr.begin(), arr.end());
    int diff = arr[n-1]-arr[0];
    int minH, maxH;
    for(int i=1;i<n;i++){
        minH = min(arr[0]+k, arr[i]-k);
        maxH = max(arr[n-1]-k, arr[i-1]+k);
        if(minH<0)continue;
        diff = min(diff, maxH-minH);
    }
    return diff;
}

int main(){
    vector<int> arr{3, 9, 12, 16, 20};
    cout << heightDiffernce(arr, arr.size(),3);
    return 0;
}