#include<bits/stdc++.h>

using namespace std;

string validJumble(string a, string b, string c){
    unordered_map<char,int> mp;
    for(auto x:a)mp[x]++;
    for(auto x:b)mp[x]++;
    for(auto x:c)mp[x]--;
    for(auto x:mp)if(x.second!=0)return("invalid");
    return("valid");
}

int main(){
    cout << validJumble("XY","12","1XY2") << endl;
    cout << validJumble("XY","12","21XY2")<< endl;
    
    return 0;
}