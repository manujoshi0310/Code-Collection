#include<bits/stdc++.h>

using namespace std;

vector<int> sortinUsingRC(vector<int> arr){
    if(arr.size()==1)return arr;
    int x = arr[arr.size()-1];
    arr.pop_back();
    sortinUsingRC(arr);
    arr.push_back(x);
    sort(arr.begin(), arr.end());
    return arr;
}

int main(){
    vector<int> arr{7,3,5,2,1,9,4};
    arr = sortinUsingRC(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}