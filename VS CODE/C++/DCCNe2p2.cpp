#include<iostream>
using namespace std;

void insertElement(char* data, int pos, char c);

int main(){
    int len, x, l, count=0;
    cout << "Enter length of data:";
    cin >> l;
    
    len=l + l/5 + 1;
    char data[len];

    cout << "Enter the data:";
    cin >> data;
    for(int i=0;i<l;i++){
        if(data[i]=='1'){
            count++;
            if(count==5){
                insertElement(data,i+1,'0');
            }
        }
        else{
            count=0;
        }
    }
    cout<< "Bit Stuffed output is:" << data;
}



void insertElement(char* data, int pos, char c){
    int len = sizeof(data)/sizeof(data[0]);

    for(int i=len-1;i>pos;i--){
        data[i]=data[i-1];
    }
    data[pos] = c;
}
