#include<bits/stdc++.h>

using namespace std;

static int t[1001][1001];

bool isPalindrome(string s, int i, int j){
    if(i==j)return true;
    if(i>j) return true;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int solve(string s, int i, int j){
    if(i>=j)return 0;
    if(isPalindrome(s,i,j)==true) return 0;
    if(t[i][j]!=-1)return t[i][j];
    int mn = INT_MAX, temp;
    for(int k=i;k<=j-1;k++){
        temp = solve(s,i,k)+solve(s,k+1,j)+1;
        if(mn>temp){
            mn=temp;
        }
    }
    t[i][j]=mn;
    return mn;
}

int main(){
    memset(t,-1,sizeof(t));
    string s;
    cout << "Enter the string:";
    cin >> s;
    cout << solve(s,0,s.size()-1);
}