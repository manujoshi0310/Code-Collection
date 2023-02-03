#include<bits/stdc++.h>

using namespace std;

string countAndSay(int n){
    string str="1", str2="";
    int x;
    if(n==1)return str;
    for(int i=2;i<=n;i++){
        int cnt=0;
        for(int j=0;j<str.size();j++){
            cnt++;
            if(j!=str.size()-1&&str[j]!=str[j+1]){
                str2.append(to_string(cnt)+str[j]);
                cnt=0;
            }
            if(j==str.size()-1){
                str2.append(to_string(cnt)+str[j]);
                cnt=0;
            }
        }
        str=str2;
        str2="";
    }
    
    return str;
}

int main(){
    cout << countAndSay(7);// 1 11 21 1211 111221 312211 13112221 1113213211.........
    return 0;
}