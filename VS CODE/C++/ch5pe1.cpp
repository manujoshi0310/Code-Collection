#include<iostream>
using namespace std;
void deleteElement(int arr[], int x, int len){
    for(int i=x;i<len-1;i++){
        arr[i]=arr[i+1];
    }
    arr[len-1] = NULL;

}
int main(){
    int arr[] = {10,60,23,60,12,16,50,10,69,60,50};//10 60 23 12 16 50 69
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(i!=j && arr[i]==arr[j]){
                deleteElement(arr, j, len);
                len--;
            }
        }
    }
    for(int i=0;i<len;i++){
        cout << arr[i] << "  ";
    }
}