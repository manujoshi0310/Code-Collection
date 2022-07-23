#include<bits/stdc++.h>

using namespace std;

int t[1001][1001];

int MCM(int arr[], int i, int j){
    int mn = INT_MAX;
    if(i>=j)return 0;
    if(t[i][j]!=-1) return t[i][j];
    for(int k=i;k<j;k++){
        int temp = MCM(arr, i, k) + MCM(arr, k+1, j) + arr[i-1]*arr[k]*arr[j];
        mn = min(mn, temp);
    }
    t[i][j] = mn;
    return t[i][j];
}

int main(){
    int arr[] = {10, 30, 5, 60}, size = sizeof(arr)/sizeof(arr[0]);
    memset(t,-1,sizeof(t));
    cout << MCM(arr, 1, size-1);
    return 0;
}