#include<bits/stdc++.h>

using namespace std;

string reverseString(string og){
    string op;
    for(int i=og.size()-1;i>=0;i--)op.push_back(og[i]);
    return op;
}

int main(){
    string s = "reverse", op;
    op = reverseString(s);
    cout << op;

    return 0;
}