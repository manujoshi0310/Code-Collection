#include<bits/stdc++.h>

using namespace std;

vector<int> cyclicRotation(vector<int> arr){
    int temp = arr[0];
    for(int i=1;i<arr.size();i++){
        arr[i-1]=arr[i];
    }
    arr[arr.size()-1] = temp;
    return arr;
}

int main(){
    vector<int> arr{0,1,2,3,4,5};
    arr = cyclicRotation(arr);
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << "  ";
    }
    
    return 0;
}