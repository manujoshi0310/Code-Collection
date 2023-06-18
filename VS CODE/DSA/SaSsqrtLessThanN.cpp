#include<bits/stdc++.h>

using namespace std;

int countSquares(int n){
    int sqr=0,i=0;
    while(sqr<n){
        sqr=i*i;
        i++
    }
    return(i-1)
    // return(sqrt(n-1));
}

int main(){
    return 0;
}