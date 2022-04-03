#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> nums)
{
	int max_ending_here = 0, max_so_far = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
       if (nums[i] <= max_ending_here + nums[i]) {
            max_ending_here += nums[i];
        }
       
        else {
            max_ending_here = nums[i];
        }
        if (max_ending_here > max_so_far)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main(){
    vector<int> arr;
    int n,x;
    cout << "Bhai kitne element chahiye:";
    cin >> n;

    for(int i=0;i<n;i++){
        //cout << "Bhai element no. " << i+1 << " daaldo:";
        cin >> x;
        arr.push_back(x);
    }

    cout << "Bhai max subarray ka sum " << maxSubArray(arr) << " h";

}