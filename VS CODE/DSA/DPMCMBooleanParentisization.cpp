#include<bits/stdc++.h>

using namespace std;

int t[1001][1001][2];

int solve(string s, int i, int j, bool isTrue){
    if(i>j) return true;//  TRUE IS CORRECT but doesn't matter as the value of k, i and j arent inclusive; ignore if not understood;
    if(i==j){
        if(isTrue==true) return(s[i]=='T');
        if(isTrue==false) return(s[i]=='F');
    }
    if(t[i][j][isTrue]!=-1)return t[i][j][isTrue];
    int ans=0;
    for(int k=i+1;k<j;k+=2){
        int lt,rt,lf,rf;

        if(t[i][k-1][1]!=-1) lt = t[i][k-1][1];
        else{
            lt = solve(s,i,k-1,true);
            t[i][k-1][1] = lt;
        }

        if(t[i][k-1][0]!=-1) lf = t[i][k-1][0];
        else{
            lf = solve(s,i,k-1,false);
            t[i][k-1][0] = lf;
        }
        
        if(t[k+1][j][1]!=-1) rt = t[k+1][j][1];
        else{
            rt = solve(s,k+1,j,true);
            t[k+1][j][1] = rt;
        }

        if(t[k+1][j][0]!=-1) rf = t[k+1][j][0];
        else{
            rf = solve(s,k+1,j,false);
            t[k+1][j][0] = rf;
        }
        
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
    t[i][j][isTrue] = ans;
    return t[i][j][isTrue];
}

int main(){
    memset(t,-1,sizeof(t));
    string s = "T|F&T^F";
    cout << solve(s,0,s.size()-1,true);
    return 0;
}