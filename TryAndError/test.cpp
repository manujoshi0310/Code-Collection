#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
        int mxProfit=0;
        for(int i=prices.size()-1;i>=0;i--){
            mxProfit=max(mxProfit, prices[i]-(*min_element(prices.begin(), prices.begin()+i)));
            cout << *min_element(prices.begin(), prices.end()-i) << endl;
        }
        return mxProfit;
}
int main(){
    vector<int> prices{2,1,4};
    cout << maxProfit(prices);
    // vector<vector<int>> intervals{{1,4},{0,2},{3,5}}, ans;//[[1,4],[0,2],[3,5]]
    // stack<vector<int>> stk;
    // sort(intervals.begin(),intervals.end());
    // int i=0;
    // while(i<intervals.size()){
    //     if(i==0)stk.push(intervals[i]);
    //     else{
    //         if(stk.top()[1]>=intervals[i][0]){
    //             stk.pop();
    //             stk.push({min(intervals[i][0],stk.top()[0]),max(intervals[i][1],stk.top()[1])});
    //         }
    //         else stk.push(intervals[i]);
    //     }
    //     cout << stk.top()[0] << " " << stk.top()[1] << endl;
    //     i++;
    // }
    // //cout <<stk.size() << endl;
    // while(!stk.empty()){
    //     ans.insert(ans.begin(),stk.top());
    //     stk.pop();
    // }
    // for(auto num:ans)cout << num[0] << " " << num[1] << endl;
    
}