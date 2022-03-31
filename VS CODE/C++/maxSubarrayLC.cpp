#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }

int max(int a, int b, int c) { return max(max(a, b), c); }

int maxCrossingSum(vector<int> arr, int l, int m, int h)
{
	int sum = 0;
	int left_sum = INT_MIN;
	for (int i = m; i >= l; i--) {
		sum = sum + arr[i];
		if (sum > left_sum)
			left_sum = sum;
	}
	sum = 0;
	int right_sum = INT_MIN;
	for (int i = m + 1; i <= h; i++) {
		sum = sum + arr[i];
		if (sum > right_sum)
			right_sum = sum;
	}
	return max(left_sum + right_sum, left_sum, right_sum);
}

int maxSubArray(vector<int> arr, int l, int h)
{
	if (l == h)
		return arr[l];

	int m = (l + h) / 2;

	return max(maxSubArray(arr, l, m),
			maxSubArray(arr, m + 1, h),
			maxCrossingSum(arr, l, m, h));
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

    cout << "Bhai max subarray ka sum " << maxSubArray(arr, 0, arr.size()-1) << " h";

}