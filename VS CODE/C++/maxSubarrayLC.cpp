#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int> nums){
    int max=INT_MIN, sum=0;
    for(int i=0;i<nums.size();i++){
        if(max<sum){
            max=sum;
        }
        if(i==nums.size()-1) sum = 0;
    }
    return max;
}

int main(){
    vector<int> arr;
    int n,x;
    cout << "Bhai kitne element chahiye:";
    cin >> n;

    for(int i=0;i<n;i++){
        cout << "Bhai element no. " << i+1 << " daaldo:";
        cin >> x;
        arr.push_back(x);
    }

    cout << "Bhai max subarray ka sum " << maxSubarray(arr) << " h";

}