#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s, int i, int j){
    for(int k=i;k<=j;k++){
        if(s[k]!=s[j-k]){
            return false;
        }
    }
    return true;
}

int solve(string s, int i, int j){
    if(i>=j)return 0;
    if(isPalindrome(s,i,j)) return 0;
    int mn = INT_MAX, temp;
    for(int k=i;k<=j-1;k++){
        temp = 1+solve(s,i,k)+solve(s,k+1,j);
        mn = min(mn,temp);
    }
    return mn;
}

int main(){
    string s;
    cout << "Enter the string:";
    // cin >> s;
    s="nitik";
    cout << solve(s,0,s.size()-1);
}