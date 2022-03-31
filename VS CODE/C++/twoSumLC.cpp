#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>::iterator findInt;
    vector<int> output;
    for(int i=0;i<nums.size();i++){
        findInt = find(nums.begin(), nums.end(), target-nums[i]);
        if(findInt!=nums.end() && (findInt-nums.begin())!=i){
            output.push_back(i);
            output.push_back(findInt-nums.begin());
            return output;
        }
    }
    return output;
}

int main(){
    vector<int> nums, output;
    int n,x,target;
    cout << "No. of elements:";
    cin  >> n;
    for(int i=0;i<n;i++){
        cout << "Enter element no. " << i+1 << " :";
        cin >> x;
        nums.push_back(x);
    }
    cout << "Enter target number:";
    cin >> target;

    output = twoSum(nums, target);

    cout << "\nYour target sum was found at indices " << output[0] << " and " << output[1] ;

}