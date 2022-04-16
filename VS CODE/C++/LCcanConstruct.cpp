#include<bits/stdc++.h>

using namespace std;

bool canConstruct(string ransomNote, string magazine){
    int hash1[26], hash2[26];
    for(int i=0;i<26;i++){
        hash1[i] = 0;
    }
    for(int i=0;i<26;i++){
        hash2[i] = 0;
    }
    for(int i=0;i<ransomNote.length();i++){
        hash1[((int)ransomNote[i])%26]++;
    }
    for(int i=0;i<magazine.length();i++){
        hash2[((int)magazine[i])%26]++;
    }
    for(int i=0;i<ransomNote.length();i++){
        if(hash1[((int)ransomNote[i])%26] > hash2[((int)ransomNote[i])%26]){
            return false;
        }
    }
    return true;
}

int main(){
    cout<< canConstruct("a","b") << "\n";
    cout<< canConstruct("aa","ab") << "\n";
    cout<< canConstruct("aa","aab") << "\n";
    return 0;
}