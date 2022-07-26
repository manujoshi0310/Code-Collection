#include<bits/stdc++.h>

using namespace std;

int solve(string s, int i, int j, bool isTrue){
    if(i>j) return false;
    if(i==j){
        if(isTrue==true) return(s[i]=='T');
        if(isTrue==false) return(s[i]=='F');
    }
    int ans=0;
    for(int k=i+1;k<j;k+=2){
        int lt,rt,lf,rf;
        lt = solve(s,i,k-1,true);
        lf = solve(s,i,k-1,false);
        rt = solve(s,k+1,j,true);
        rf = solve(s,k+1,j,false);
        if(s[k]=='&'){
            if(isTrue) ans += lt*rt;
            else ans+= lt*rf + rt*lf + lf*rf;
        }
        else if(s[k]=='|'){
            if(isTrue) ans += lt*rt + lt*rf + rt*lf;
            else ans+= lf*rf;
        }
        else if(s[k]=='^'){
            if(isTrue) ans += lt*rf + rt*lf;
            else ans+= lt*rt + lf*rf;
        }
    }
    return ans;
}

int main(){
    string s = "T^F&T";
    cout << solve(s,0,s.size()-1,true);
    return 0;
}