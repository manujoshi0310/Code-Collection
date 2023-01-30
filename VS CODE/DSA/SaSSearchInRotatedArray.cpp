#include<bits/stdc++.h>

using namespace std;

int search(vector<int>& nums, int target) {
    if(target>=nums[0]){
        for(int i=0;i<nums.size();i++)if(target==nums[i])return i;
        return -1;
    }
    else{
        for(int j=nums.size()-1;j>=0;j--)if(target==nums[j])return j;
        return -1;
    }
}

int main(){
    return 0;
}