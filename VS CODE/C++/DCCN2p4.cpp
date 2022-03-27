#include<iostream>
#include<string>

using namespace std;

int main(){
    int count=0;
    string data,output;
    cout << "Enter the string:";
    cin >> data;

    for(int i = 0;i<data.length();i++){
        if(data[i]=='1'){
            count++;
          
            if(count==5 && data[i+1]=='0'){
                data.erase(data.begin() + i + 1);
                count=0;
            }
        }
        else{
            count=0;
        }
    }
    cout << "The de-stuffed data is:" << data;


}