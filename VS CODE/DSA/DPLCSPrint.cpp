#include<bits/stdc++.h>

using namespace std;

int t[101][101];

string PrintLCS(string X, string Y, int m, int n){
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(i==0||j==0)t[i][j]=0;

    for(int i=1;i<m+1;i++)
    for(int j=1;j<n+1;j++){
        if(X[i-1]==Y[j-1])
        t[i][j]=1+t[i-1][j-1];
        else
        t[i][j]=max(t[i-1][j],t[i][j-1]);
    }
    int i=m,j=n;
    string s;
    while(i>0 && j>0){
        if(X[i-1]==Y[j-1]){
            s.push_back(X[i-1]);
            i--;
            j--;
        }
        else{
            if(t[i][j-1]>t[i-1][j])j--;
            else i--;
        }
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    string X, Y;
    cout << "Enter string X:";
    cin >> X;
    cout << "Enter string Y:";
    cin >> Y;
    int m=X.size(), n=Y.size();
    cout << PrintLCS(X,Y,m,n);
    return 0;
}