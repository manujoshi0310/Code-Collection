#include<bits/stdc++.h>

using namespace std;

void printPrime(int n){
    int i,j;
    for(i=2;i<=n;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j)cout<< endl << j; 
    }
}

int main(){
    printPrime(20);
    return 0;
}