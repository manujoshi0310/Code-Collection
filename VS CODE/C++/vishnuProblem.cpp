#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr;
    int x, n, count=0;
    cout << "enter no. of elements:";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Enter element:";
        cin >> x;
        arr.push_back(x);
    }

    for(int i=0;i<arr.size();i++){
        if(arr[i] != *max_element(arr.begin(), arr.end())){
            count++;
        }
    }
    cout << "Answer is:" << count;  

}