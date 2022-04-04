#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    vector<int> med;
    vector<vector<int>> out;
    int ind=0;
    int orig_rows = mat.size(); 
    int orig_cols = mat.at(0).size();
    if (r*c != orig_cols * orig_rows){
        return mat;
    }
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            med.push_back(mat[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        vector<int> temp;
        for(int j=0;j<c;j++){
            temp.push_back(med[c*i+j]);
                
        }
        out.push_back(temp);
    }
    return out;
}

int main(){

    vector<vector<int>> mat,out;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            mat[i].push_back(i+j);
        }
    }

    out = matrixReshape(mat, 3, 9);

    for(int i=0;i<out.size();i++){
        for(int j=0;j<out.size();j++){
            cout << out[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}