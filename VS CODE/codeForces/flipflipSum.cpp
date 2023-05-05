#include<bits/stdc++.h>

using namespace std;

int flipFlopSum(vector<int> arr){
    int sm=0,count=0, mxCount=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(1){
            if(i!=arr.size()-1&&arr[i+1]==-1){
                count=4;
                if(count>mxCount)mxCount=count;
            }
            else if(i!=arr.size()-1&&arr[i+1]==1){
                count=0;
                if(count>mxCount)mxCount=count;
            }
            else if(arr[i]==1&&i==arr.size()-1&&arr[i-1]!=-1){
                count=-4;
                if(count>mxCount)mxCount=count;
            }
            else if(arr[i]==1&&arr.size()-1&&arr[i-1]==-1){
                count=0;
                if(count>mxCount)mxCount=count;
            }
        }
    }
    for(int i=0;i<arr.size();i++)sm+=arr[i];

    return(mxCount+sm);
}

int main(){
    int t;
    vector<int> ans;
    cin >> t;
    while(t--){
        vector<int> arr;
        int n,x;
        cin >> n;
        while(n--){
            cin >> x;
            arr.push_back(x);
        }
        ans.push_back(flipFlopSum(arr));
    }
    for(auto x:ans)cout << x << endl;
    return 0;
}