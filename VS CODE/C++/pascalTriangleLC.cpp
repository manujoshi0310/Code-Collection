#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows){
    vector<vector<int>> res = {{1}};
    if(numRows == 1){
            return res;
    }
    for (int i=1; i < numRows; i++){
        int l = 0, h = 1;
        res.push_back({1});
        while (h < res[i-1].size()){
            res[i].push_back(res[i-1][l]+res[i-1][h]);
            l++, h++;
        }
        res[i].push_back(1);
    }
    return res;
}


int main(){
    int x;
    cout << "Enter no of levels of Pascals' Triangle:";
    cin >> x;

    vector<vector<int>> output = generate(x);

}