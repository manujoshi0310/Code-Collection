#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        unordered_map<char, int> mp;
        cin >> s;
        for(auto x:s)mp[x]++;
        int i=0,j=0;
        while(j<s.size()){
            if(j-i+1<2)j++;
            else{
                
            }
        }

    }
    return 0;
}