#include<bits/stdc++.h>

using namespace std;

int t[102][1002];


int knapsack(vector<int> wt, vector<int> val, int W, int n){
    if(n==0||W==0)return 0;
    if(t[wt[n-1]][n]!=-1)return(t[wt[n-1]][n]);
    if(wt[n-1]<=W){
        t[wt[n-1]][n]=max(knapsack(wt, val, W-wt[n-1], n-1), knapsack(wt, val, W, n-1));
        return(t[wt[n-1]][n]);
    }
    else{
        t[wt[n-1]][n] = knapsack(wt, val, W, n-1);
        return(knapsack(wt, val, W, n-1));
    }
}

int main(){
    memset(t,-1,sizeof(t));
    return 0;
}