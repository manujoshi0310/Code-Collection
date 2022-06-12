#include<bits/stdc++.h>

using namespace std;

vector<int> moveNgtveToOneSide(vector<int> arr){
    int i=-1,temp;
    for(int j=0;j<arr.size();j++){
        if(arr[j]<0){
            temp = arr[j];
            arr[j] = arr[i+1];
            arr[i+1] = temp;
            i++;
        }
    }
    return arr;
}

int main(){
    vector<int> arr{3,4,-1,5,-6,-10,7,-15,15,-30};
    arr = moveNgtveToOneSide(arr);
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    
    
    return 0;
}