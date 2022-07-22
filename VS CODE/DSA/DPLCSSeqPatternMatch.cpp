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

bool seqPatternMatching(string X, string Y, int m, int n){
    if(m==LCS(X,Y,m,n))return true;
    else return false;
}

int main(){
    memset(t, -1, sizeof(t));
    string X, Y;
    cout << "Enter string X:";
    cin >> X;
    cout << "Enter string Y:";
    cin >> Y;
    int m=X.size(), n=Y.size();
    if(seqPatternMatching(X,Y,m,n))cout << "True";
    else cout << "False";
    return 0;
}