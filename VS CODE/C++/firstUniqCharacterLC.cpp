#include<bits/stdc++.h>

using namespace std;

int firstUniqCharacter(string s){
    int hash[26];
    for(int i=0;i<26;i++){
        hash[i] = 0;
    }
    for(int i=0;i<s.length();i++){
        hash[((int)s[i])%26]++;
    }
    for(int i=0;i<s.length();i++){
        if(hash[((int)s[i])%26]==1){
            return i;
        }
    }
    return -1;
    
}

int main(){
    string s = "helloworld";
    cout << firstUniqCharacter(s);
    return 0;
}