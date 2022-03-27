#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(12);
    arr.push_back(125);
    arr.push_back(2);
    arr.push_back(124);
    sort(arr.begin(), arr.end());
    
    cout << arr[5] << "\t" << arr.size();
}