#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
    vector<int> ans;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            ans.push_back(Mat[i][j]);
        }
    }
    int x=0;
    sort(ans.begin(),ans.end());
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            Mat[i][j]=ans[x];
            x++;
        }
    }
    return Mat;
}

int main(){
    return 0;
}