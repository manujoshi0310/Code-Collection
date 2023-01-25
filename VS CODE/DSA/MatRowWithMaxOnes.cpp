#include<bits/stdc++.h>

using namespace std;

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
    vector<int> sm;
    int mx=0,idx=-1;
    for(int i=0;i<n;i++){
        sm.push_back(0);
        for(int j=0;j<m;j++)sm[i]+=arr[i][j];
        if(sm[i]>mx){
            mx=sm[i];
            idx=i;
        }
    }
    return idx;
}

int main(){
    return 0;
}