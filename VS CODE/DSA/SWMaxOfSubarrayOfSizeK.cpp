#include<bits/stdc++.h>

using namespace std;

vector<int> maxOfSubarrOfSizeK(vector<int> arr, int k){
    int i=0,j=0;
    list<int> l;
    vector<int> ans;
    if(arr.size()<k){
        ans.push_back(*max(arr.begin(), arr.end()));
        return (ans);
    }
    while(j<arr.size()){
        
        while(l.size()>0 && l.back()<arr[j])l.pop_back();
        l.push_back(arr[j]);
        
        if(j-i+1<k)j++;
        if(j-i+1==k){
            ans.push_back(l.front());
            if(l.front()==arr[i])l.pop_front();
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    vector<int> v{1, 3, -1, -3, 5, 3, 6, 7}, ans;
    ans = maxOfSubarrOfSizeK(v,3);
    for(auto x:ans)cout << x << " ";
    return 0;
}