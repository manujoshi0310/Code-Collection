#include<bits/stdc++.h>

using namespace std;

int lengthOfLastWord(string s){
    int len=0,i=s.size()-1;
        while(i>=0){
            if(s[i]==' ' && len>0)
                return len;
           if(s[i]!=' ')
            len++;
            i-=1;
        }
    return len;
}

int main(){
    return 0;
}