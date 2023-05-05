#include<bits/stdc++.h>

using namespace std;

int gamingForces(vector<int> h){
    // sort(h.begin(),h.end(),greater<int>());
    int i=h.size()-1,rm=h.size();
    unordered_map<int,int> mp;
    for(auto x:h)mp[x]++;
    for(int i=0;i<h.size();i++){
        if(mp[h[i]]%2==0&&h[i]<3)
    }
    while(i>=0){
        if(h[i]==1 && rm>1){

        }
    }
}

int main(){
    return 0;
}