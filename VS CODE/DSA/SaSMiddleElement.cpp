#include<bits/stdc++.h>

using namespace std;

int middle(int A, int B, int C){
    int x = abs(A-B), y = abs(B-C), z = abs(C-A);
    if(z>=y && z>=x)return B;
    else if(x>=y&&x>=z)return C;
    else return A;
}

int main(){
    return 0;
}