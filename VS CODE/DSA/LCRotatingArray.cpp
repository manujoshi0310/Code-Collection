#include<bits/stdc++.h>

using namespace std;

void rotate(vector<int>& nums, int k){
    int l = nums.size();
    if(l==k)return;
    for(int i=l-k;i<l;i++){//4 5 6
        nums.push_back(nums[i]);
    }
    for(int i=0;i<k;i++){//0 1 2 3 4 5 6
        nums[k+i]=nums[i];//3 4 5 6 7 8 9 
        nums[i] = nums[l+i];//
    }
    for(int i=0;i<k;i++){
        nums.pop_back();
    }
}

int main(){
    vector<int> nums{1,2,3,4,5,6,7};
    rotate(nums, 3);
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}