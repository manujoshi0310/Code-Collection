#include<bits/stdc++.h>

using namespace std;

int countAnagram(string s, string ptr){
    int k=ptr.size(),ans=0;
    unordered_map<char,int> mp;
    for(auto x:ptr) mp[x]++;
    int count = mp.size(),i=0,j=0;
    while(j<s.size()){
        if (mp.find(s[j]) != mp.end()){
            mp[s[j]]--;
            if (mp[s[j]] == 0){
                count--;
            }
        }
        if(j-i+1<k) j++;
        else if(j-i+1==k){
            if(count==0)ans++;
            
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]++;
                if(mp[s[i]]==1)count++;
            }

            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    string s="aabaabaa", ptr = "abaa";
    cout << countAnagram(s,ptr);
    return 0;
}