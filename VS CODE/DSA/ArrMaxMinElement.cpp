#include<bits/stdc++.h>

using namespace std;

int maxElement(vector<int> arr){
    int max = arr[0];
    for(int i = 0;i<arr.size();i++){
        if(arr[i]>max)max=arr[i];
    }
    return max;
}

int minElement(vector<int> arr){
    int min = arr[0];
    for(int i = 0;i<arr.size();i++){
        if(arr[i]<min)min=arr[i];
    }
    return min;
}

int main(){
    vector<int> arr{1,5,6,2,7,0,6};
    cout << maxElement(arr) << "  " << minElement(arr);
    return 0;
}