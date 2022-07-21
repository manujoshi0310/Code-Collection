#include<bits/stdc++.h>

using namespace std;

int t[101][101];

int LCS(string X, string Y, int m, int n){
    if(n==0||m==0)return 0;
    if(X[m-1]==Y[n-1]){
        if(t[m][n]!=-1)return t[m][n];
        t[m][n] = 1 + LCS(X,Y,m-1,n-1);
        return t[m][n];
    }
    else{
        if(t[m-1][n]!=-1 && t[m][n-1]!=-1)return max(t[m][n-1],t[m-1][n]);
        t[m-1][n] = LCS(X,Y,m-1,n);
        t[m][n-1] = LCS(X,Y,m,n-1);
        return max(t[m][n-1],t[m-1][n]);
    }
}

int SCS(string X, string Y, int m, int n){
    return m+n-LCS(X, Y, m, n);
}

int main(){
    memset(t, -1, sizeof(t));
    string X, Y;
    cout << "Enter string X:";
    cin >> X;
    cout << "Enter string Y:";
    cin >> Y;
    int m=X.size(), n=Y.size();
    cout << SCS(X,Y,m,n);
    return 0;
}