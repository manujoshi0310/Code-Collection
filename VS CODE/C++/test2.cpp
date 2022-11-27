// C++ code for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find maximum MEX of the array
// after doing some addition and subtraction
int getMaximumMex(vector<int> arr, int K)
{
	unordered_map<int, int> mp;
    int n = arr.size();
	for (int i = 0; i < n; i++) {
		mp[arr[i] % K]++;
	}

	for (int i = 0; i < n; i++) {
		if (mp.find(i % K) == mp.end()) {
			return i;
		}

		mp[i % K]--;
		if (mp[i % K] == 0)
			mp.erase(i % K);
	}

	return n;
}



// Driver code
int main()
{
	
}
