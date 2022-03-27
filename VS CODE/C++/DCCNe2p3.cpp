#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    string data;
    int count=0;

    ifstream ReadFile("input.txt");
    
    while (getline (ReadFile, data))
    {
        cout << data;
    }

    for(int i = 0;i<data.length();i++){
        if(data[i]=='1'){
            count++;
          
            if(count==5){
                data.insert(i+1,1,'0');
            }
        }
        else{
            count=0;
        }
    }
    cout<< "Bit Stuffed output is:" << data;
    
    ReadFile.close();
    

}