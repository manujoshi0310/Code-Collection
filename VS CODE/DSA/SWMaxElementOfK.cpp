#include<bits/stdc++.h>

using namespace std;

vector<int> maxElementsOfK(vector<int> arr, int k){
    list<int> mx;
    vector<int> ans;
    int j=0,i=0;
    if(k>arr.size()){
        ans.push_back(*max(arr.begin(),arr.end()));
        return ans;
    }
    while(j<arr.size()){
        if(j-i+1<k){
            if(mx.back()<arr[j]){
                mx.clear();
            }
            mx.push_back(arr[j]);
            j++;
        }
        if(j-i+1==k){
            ans.push_back(mx.front());
            if(arr[i]==mx.front())mx.pop_front();
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    vector<int> arr{1, 3, -1, -3, 5, 3, 6, 7}, ans;
    ans = maxElementsOfK(arr, 3);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}