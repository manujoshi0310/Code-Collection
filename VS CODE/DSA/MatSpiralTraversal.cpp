#include<bits/stdc++.h>

using namespace std;

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c){
    int sRow=0,sCol=0,eRow=r-1,eCol=c-1,total=r*c;
    vector<int> ans;
    while(total>0){
        for(int i=sCol;i<=eCol&&total>0;i++){
            ans.push_back(matrix[sRow][i]);
            total--;
        }
        sRow++;
        for(int i=sRow;i<=eRow&&total>0;i++){
            ans.push_back(matrix[i][eCol]);
            total--;
        }
        eCol--;
        for(int i=eCol;i>=sCol&&total>0;i--){
            ans.push_back(matrix[eRow][i]);
            total--;
        }
        eRow--;
        for(int i=eRow;i>=sRow&&total>0;i--){
            ans.push_back(matrix[i][sCol]);
            total--;
        }
        sCol++;
    }
    return ans;

}

int main(){

    vector<vector<int>> mt{{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15,16}};
    vector<int> ans = spirallyTraverse(mt,4,4);
    for(auto x:ans)cout<<x<<" ";//1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

    return 0;
}