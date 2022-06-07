#include<bits/stdc++.h>

using namespace std;

vector<int> sort012(vector<int> arr){
    int count0=0, count1=0, count2=0;
    vector<int> output;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else if(arr[i]==2){
            count2++;
        }
    }
    for(int i=0;i<count0;i++){
        output.push_back(0);
    }
    for(int i=0;i<count1;i++){
        output.push_back(1);
    }
    for(int i=0;i<count2;i++){
        output.push_back(2);
    }
    return output;
}

int main(){
    vector<int> arr{1,0,2,1,0,1,0,2,1,0,2,2};
    arr = sort012(arr);
    for(int i=0; i<arr.size();i++){
        cout << arr[i] << " ";
    }
    return 0;
}