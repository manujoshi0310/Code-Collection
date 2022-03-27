#include<iostream>

using namespace std;
int calcSum(int arr[], int n, int k)
{
 
    int sum1 = 0,sum;
    for (int i = 0; i <= n - k; i++) {
        for (int j = i; j < k + i; j++){
            sum1 += arr[j];
            
 
        }
        if(sum1>)
          
        cout << sum1 << " ";
    }
}

int main(){
    
}