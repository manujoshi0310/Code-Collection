#include<bits/stdc++.h>

using namespace std;

string repeatingCharacters(string s){
    unordered_map<char, int> mp;
    string op;
    for(auto x:s)mp[x]++;
    for(auto x:mp)if(x.second > 1) op.push_back(x.first);
    return op;
}

int main(){
    cout << repeatingCharacters("ababaacdefghijkkopd");
    return 0;
}