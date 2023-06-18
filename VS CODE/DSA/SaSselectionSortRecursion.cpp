#include<iostream>
using namespace std;

int m = 0;

void selectionSort(int arr[],int size){

    if(size==0||size==1){
        return;
    }
    int i = 0;
    int minIndex = i;
    for(int j=i;j<size;j++){
        if(arr[j]<arr[minIndex])
        minIndex = j;
    }
    swap(arr[minIndex],arr[i]);
    // cout << arr[0] << " " << m << endl;
    // m++;
    return selectionSort(arr+1,size-1);
}

int main(){
    int arr[10] = {32,5,11,23,155,6,77,45,63,10};
    int size = 10;
    selectionSort(arr,size);
    for(auto x:arr)cout << x << " ";
}