#include<bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(&nums[0],&nums[nums.size()]);
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> nums;
    int n,x;
    cout << "Enter number of elements:";
    cin >> n;

    for(int i=0;i<n;i++){
        cout << "enter element no. " << i+1 << ":";
        cin >> x;
        nums.push_back(x);
    }
    if(containsDuplicate(nums))
    cout << "This list has duplicates";
    else
    cout << "No duplicates found";
}