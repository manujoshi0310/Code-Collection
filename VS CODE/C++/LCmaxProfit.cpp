#include<bits/stdc++.h>

using namespace std;

int maxprofit(vector<int>& prices){
    int x, max1=0;
    if(prices.size()==1){
        return 0;
    }
    for(int i=1;i<prices.size();i++){
        x=prices[i]-prices[0];
        if(x>max1){
            max1=x;
        }
    }
    prices.erase(prices.begin());
    return(max(max1, maxprofit(prices)));
}

int main(){
    vector<int> v = {7,1,5,3,6,4};
    cout << maxprofit(v);
    return 0;
}