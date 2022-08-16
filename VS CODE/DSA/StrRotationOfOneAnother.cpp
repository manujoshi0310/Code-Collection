#include<bits/stdc++.h>

using namespace std;

bool isRotation(string a, string b){
    if(a.size()!=b.size())return false;
    a +=a;
    return(a.find(b)!=string::npos);

}

int main(){
    cout<<isRotation("cdba","abcd");
    //return 0;
}