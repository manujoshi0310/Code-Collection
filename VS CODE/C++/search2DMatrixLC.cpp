#include<bits/stdc++.h>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for(int i=0;i<matrix.size();i++){
        int len = matrix[i].size();
        if(target>=matrix[i][0] && target <= matrix[i][len-1]){
            for(int j=0;j<matrix[i].size();j++){
                if(target == matrix[i][j]){
                    return true;
                }
            }   
        }
    }
    return false;
}

int main(){
    return 0;
}