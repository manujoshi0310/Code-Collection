#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix){
    int m,n;
    vector<vector<int>> output;
    m = matrix.size();
    n = matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            output[i].push_back(matrix[j][i]);
        }
    }
    return output;
}

int main(){

}