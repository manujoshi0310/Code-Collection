#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int sumOfDigits(int num){
    int sum=0;
    while(num>0){
        sum = sum+(num%10);
        num = floor(num/10);
    }
    return sum;
}

int main(){
    int k,num;
    for(int i=0;i<k;i++){
        cin >> num;
        cout << sumOfDigits(num);
    }
}