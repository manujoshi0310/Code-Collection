#include<bits/stdc++.h>

using namespace std;

int valueOfPi(string check){
    int count=0;
    string pi = "3141592653589793238462643383279";
    for(int i=0;i<pi.size();i++){
        if(pi[i]!=check[i])return count;
        count++;
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        string ip;
        cin >> ip;
        ans.push_back(valueOfPi(ip));
    }
    for(auto x:ans)cout << x << endl;
    return 0;
}