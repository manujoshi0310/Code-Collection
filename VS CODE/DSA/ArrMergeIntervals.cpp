#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;
    for(int i=0;i<intervals.size()-1;i++){
    if(intervals[i+1][0]<=intervals[i][1]){
        ans.push_back({intervals[i][0],intervals[i+1][1]});
    }
    else ans.push_back(intervals[i]);
    }
    return ans;
}

int main(){
    vector<vector<int>> intr = {{1,3},{2,6},{8,10},{15,18}}, ans;
    ans = merge(intr);
    for(int i=0;i<ans.size();i++) cout << ans[i] << " ";

    return 0;
}