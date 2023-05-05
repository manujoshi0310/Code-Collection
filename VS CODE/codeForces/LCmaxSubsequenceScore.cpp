#include<bits/stdc++.h>

using namespace std;

long long maxScore(vector<int> &nums1, vector<int> &nums2, int k){
    int n=nums1.size();
    int dp[n][k+1], ans=-1;

    memset(dp,-1,sizeof(dp));
    
    for(int i=0;i<n;i++)dp[i][1]=nums1[i];

    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(nums1[i]>nums1[j]){
                for(int l=1;l<k;l++){
                    if(dp[j][l]!=-1){
                        dp[i][l+1]=max(dp[i][l+1], dp[j][l]+nums1[i]);
                        
                    }

                }
            }
        }
    }

    for(int i=0;i<)


}

int main(){
    return 0;
}