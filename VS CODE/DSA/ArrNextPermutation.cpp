#include<bits/stdc++.h>

using namespace std;

void swapNum(vector<int> &nums, int i, int j){
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void nextPermutation(vector<int>& nums) {
    int index = -1,n = nums.size();
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index = i;
            break;
        }
    }
    for(int i=n-1;i>index and index!=-1;i--){
        if(nums[i]>nums[index]){
            swap(nums[i],nums[index]);
            break;
        }
    }
    reverse(nums.begin()+index+1,nums.end());
}

int main(){
    vector<int> nums{2,3,1};
    nextPermutation(nums);
    for(auto x:nums)std::cout << x << " ";
    return 0;
}