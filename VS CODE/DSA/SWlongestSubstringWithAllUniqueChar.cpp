#include<bits/stdc++.h>

using namespace std;

int longestSubstringWithAllUniqueChar(string s){
    unordered_map<char,int> mp;
    int i=0,j=0,maxm=0,k=0;
    while(j<s.size()){
        mp[s[j]]++;
        if(mp.size()==j-i+1)maxm=max(maxm,j-i+1);
        
        if(mp.size()>j-i+1){
            while(mp.size()>j-i+1){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            };
            if(mp.size()==j-i+1)maxm = max(maxm, j-i+1);
        }
        j++;
    }
    return maxm;
}

int main(){
    cout << longestSubstringWithAllUniqueChar("abaaaaaaaaba");
    return 0;
}