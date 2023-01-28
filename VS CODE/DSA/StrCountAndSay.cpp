#include<bits/stdc++.h>

using namespace std;

string countAndSay(int n){
    string str="1";
    int x;
    if(n==1)return str;
    for(int i=2;i<=n;i++){
        // if(i==1)str.append("1");
        map<char,int> mp;
        for(auto x:str)mp[x]++;
        str="";
        for(auto s:mp)str.append(to_string(s.second)+s.first);
    }
    return str;
}

int main(){
    cout << countAndSay(4);
    return 0;
}