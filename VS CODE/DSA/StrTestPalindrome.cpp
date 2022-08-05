#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s){
    string p = s;
    reverse(p.begin(),p.end());
    if(p==s)return true;
    else return false;
}

int main(){
    string s = "racecar";
    cout << isPalindrome(s);
    return 0;
}