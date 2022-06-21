#include<bits/stdc++.h>

using namespace std;

int unionArr(vector<int> arr1, vector<int> arr2){
    vector<int>::iterator ip;
    vector<int> v;
    ip = set_intersection(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),v.begin());
    cout << v[0];
    return(arr1.size()+arr2.size()+(ip-v.begin()));
}

int intersectionArr(vector<int> arr1, vector<int> arr2){
    vector<int>::iterator ip;
    vector<int> v;
    ip = set_intersection(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),v.begin());
    cout << v[0];
    return(ip-v.begin());
}

int main(){
    vector<int> a1{1,3,4,5,7,8,9};
    vector<int> a2{2,3,4,5,9};
    cout << unionArr(a1,a2);
    cout << intersectionArr(a1,a2);
    return 0;
}