#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(1);
    vec.push_back(2);
    vec.erase(vec.begin());
    
    for (int num: vec)
        cout << num << endl;

}