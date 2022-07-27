#include<bits/stdc++.h>

using namespace std;

bool solve(string a, string b){
    if(a.length()!=b.length()) return false;
    //if(a==b) return true;
    if(a.compare(b)==0) return true;
    if(a.length()<=1) return false;

    int n=a.length();
    bool flag=false, case1, case2;
    
    for(int k=1;k<n;k++){
        case1 = solve(a.substr(0,k),b.substr(k,n-k)) && solve(a.substr(n-k,k),b.substr(0,k));
        case2 = solve(a.substr(0,k),b.substr(0,k)) && solve(a.substr(k,n-k),b.substr(k,n-k));
        if(case1||case2){
            flag = true;
            return flag;
        }
    }
    return flag;
}

int main(){
    string a,b;
    a="great";// g|reat g|r|e|at gre|at grea|t
    b="rgate";// r|gate r|g|at|e rga|te rgat|e
    cout << solve(a,b);
}