#include<bits/stdc++.h>

using namespace std;

vector<int> reverseArray(vector<int> arr){
    int temp;
    for (int i = 0; i <= arr.size()/2 - 1; i++)
    {
        temp = arr[i];
        arr[i] = arr[arr.size()-1-i];
        arr[arr.size()-1-i] = temp;
    }
    return arr;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    arr = reverseArray(arr);
    for(int i=0;i<arr.size();i++)cout << arr[i] << " ";
    return 0;
}