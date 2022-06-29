#include<bits/stdc++.h>

using namespace std;

int t[102][1002];


int knapsack(int wt[], int val[], int W, int n){
    if(n==0||W==0)return 0;
    //if(t[wt[n-1]][n]!=-1)return(t[wt[n-1]][n]);
        if(wt[n-1]<=W){
            //t[wt[n-1]][n]=max(knapsack(wt, val, W-wt[n-1], n-1), knapsack(wt, val, W, n-1));
            return(max(val[n-1]+knapsack(wt, val, W-wt[n-1], n-1), knapsack(wt, val, W, n-1)));
        }
        else{
            // t[wt[n-1]][n] = knapsack(wt, val, W, n-1);
            return(knapsack(wt, val, W, n-1));
        }
}

int main(){
    int wt[] = {1,3,4,5}, val[] = {1,4,5,7}, W=10;
    memset(t,-1,sizeof(t));
    cout << knapsack(wt, val, W, 4);
    return 0;
}