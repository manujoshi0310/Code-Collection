#include<bits/stdc++.h>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> output;
    output.push_back(nums[0]);
    for(int i=1; i<nums.size();i++){
        output.push_back(nums[i]+output[i-1]);
    }
    return output;
}

int main(){
    return 0;
}