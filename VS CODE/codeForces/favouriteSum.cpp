#include<bits/stdc++.h>

using namespace std;

long long int favSum(long long int fav[], long long int x, long long int n){
    long long int fSum=0, sum = (x*(x+1))/2;
    for(long long int i=0;i<n;i++){
        if(fav[i]<=x)fSum+=fav[i];
    }
    return (sum - 2*fSum);
}

int main(){
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        long long int n,x;
        cin >> n >> x;
        long long int fav[n];
        for(long long int i=0;i<n;i++)cin >> fav[i];
        ans.push_back(favSum(fav, x, n));
    }
    for(auto x:ans)cout << x << endl;
    return 0;
}