#include<bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size()-1;j++){
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
    }
}

int main(){
    vector<int> arr{2,6,15,1,45,0,20,10};
    cout << "Unsorted array: " << endl;
    for(auto x:arr)cout << x << " ";
    bubbleSort(arr);
    cout << endl << "Sorted array: " << endl;
    for(auto x:arr)cout << x << " ";
    return 0;
}