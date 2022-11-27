#include<bits/stdc++.h>

using namespace std;

int longestSubsequenceWithUniqueChar(string s, int k){
    unordered_map<char,int> mp;
    int i=0,j=0,maxm=0;
    while(j<s.size()){
        mp[s[j]]++;
        if(mp.size()<k){
            j++;
        }
        if(mp.size()==k){
            maxm=max(maxm,j-i+1);
            j++;
        }
        if(mp.size()>k){
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
            }
        }
    }
}

int main(){
    return 0;
}