#include<bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int>& nums) {
    unordered_map<int, int> mp;
    for(auto x:nums)mp[x]++;
    for(int i=1;i<nums.size();i++)if(mp[i]>1)return i;
    return -1;
}

int main(){
    return 0;
}