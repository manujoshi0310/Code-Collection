#include<bits/stdc++.h>

using namespace std;

int firstUniqCharacter(string s){
    vector<int> vec;
    int x, count;
    for(int i=0;i<s.length();i++){
        vec.push_back(0);
    }
    for(int i=0;i<s.length();i++){
        x=((int)s[i])%s.length();
        if(vec[x]==0){
            vec[x]++;
        }
        else{
            int j = x;
            while(vec[j]!=0){
                j++;
                if(j==s.length()){
                    j=0;
                }
                if(j==x){
                    break;
                }
            }

        }
    }
}

int main(){
    return 0;
}