#include<bits/stdc++.h>

using namespace std;

long long int interestingSequence(long long int n, long long int x){
    if(n==x)return n;
    long long int m=n;
    unsigned long long int e = 10*n;
    while(m!=x){
        m=m&n;
        n+=1;
        if(n>=e)return -1;
    }
    return n-1;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n,x;
        cin >> n >> x;
        cout << interestingSequence(n,x) << endl;
    }
    return 0;
}