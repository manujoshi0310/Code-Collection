#include<bits/stdc++.h>

using namespace std;


int maxWindowSizeOfGivenSum(vector<int> arr, int k){
    int i=0,j=0,sum=0,maxm=0;
    while(j<arr.size()){
        sum+=arr[j];//6
        if(sum<k){   
            j++;
        } 
        else if(sum==k){
            
            maxm=max(maxm,j-i+1);
            j++;
        }
        else if(sum>k){
            
            while(sum>k){
                sum-=arr[i];
                i++;
            }
            if(sum==k){
                
                maxm=max(maxm,j-i+1);
            }
            j++;
        }
        
    }
    return maxm;
}

int main(){
    vector<int> arr{1,2,3,1,2,4,5,1,2,4,1,1,1,1,1,4,2};
    cout << maxWindowSizeOfGivenSum(arr, 5);
    return 0;
}