#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int item;
        char c;
        Node* next;
};

int main(){
    int hash[26];
    string s = "helloworld";
    for(int i=0;i<26;i++){
        hash[i] = 0;
    }
    for(int i=0;i<s.length();i++){
        hash[((int)s[i])%26]++;
    }
    for(int i=0;i<s.length();i++){
        if(hash[((int)s[i])%26]==1){
            cout << s[i];
            break;
        }
    }
    

}