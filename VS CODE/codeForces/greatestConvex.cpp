#include<bits/stdc++.h>

using namespace std;

int greatestConvex(int k){
    int sm,fact=1,mx=-1;
    for(int i=1;i<k;i++){//3
        fact*=i;//fact = 1
        sm=fact+(fact/i);
        if(sm%k==0)mx=i;
    }
    return mx;
}

int main(){
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int k;
        cin >> k;
        ans.push_back(greatestConvex(k));
        //cout << greatestConvex(k) << "  ";
    }
    for(auto x:ans)cout << x <<" ";
    return 0;
}