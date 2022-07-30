#include<bits/stdc++.h>

using namespace std;

vector<int> maxSubarr(vector<int> arr, int k){
    int i=0,j=0;
    vector<int> op;
    list<int> ngtv;
    while(j<arr.size()){
        if(arr[j]<0) ngtv.push_back(arr[j]);
        if(j-i+1<k) j++;
        else if(j-i+1==k){
            if(ngtv.size()==0) op.push_back(0);
            else{
                op.push_back(ngtv.front());
                if(arr[i]==ngtv.front()) ngtv.pop_front();
            }
            i++;
            j++;
        }
    }
    return op;
}

int main(){
    vector<int> arr{12,-1,-7,8,-15,30,16,28},op;
    op =  maxSubarr(arr, 3);
    for(int i=0;i<op.size();i++) cout << op[i] << "  ";
    return 0;
}