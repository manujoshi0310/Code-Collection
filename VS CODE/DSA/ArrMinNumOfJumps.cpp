#include<bits/stdc++.h>

using namespace std;

int mat[100][100];

void printMat(int x);
int minNumOfJumps(vector<int> arr, int n);
int minJumpsDP(vector<int> arr, int n);

int main(){
    vector<int> arr{4,3,1,1,2,4,2,0,1,1};
    cout << minJumpsDP(arr, arr.size());
    return 0;
}

void printMat(int x){
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }
}

int minNumOfJumps(vector<int> arr, int n){
    int i=0, nextJmp=0, x=0, jumps=0, it=0;
    while(i<(n-1)){
        int j = i+arr[i];
        jumps++;
        x=i;
        while(i<=j){
            if(arr[i]+i-x>nextJmp){
                nextJmp = arr[i]+i-x;
                it = i;
            }
            i++;
        }
        i = it;
    }
    return jumps;
}

int minJumpsDP(vector<int> arr, int n){
    memset(mat, -1 ,sizeof(mat));

    for(int i=0;i<n-1;i++){
        for(int j=i;j<i+arr[i];j++)mat[i][j]=1;
    }
    // printMat(n-1);
    // return 1;
    int j=n-2, i, jmp=0;
    while(j>=0){
        for(i=0;i<=j;i++){
            if(mat[i][j]==1){
                j=i-1;
                jmp++;
                break;
            }
        }
        if(j==i)return -1;
    }
    return jmp;
}


