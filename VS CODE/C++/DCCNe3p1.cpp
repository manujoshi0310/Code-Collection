#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int binToDec(string bin){
    int l = bin.length();
    int dec = 0;
    for(int i=l-1;i>=0;i--){
        if(bin[i]=='0'){
            dec+=0;
            
        }
        else{
            dec += pow(2,l-1-i);
            
        }
    }
    return dec;
}

string decToBin(int dec){
    string bin = "";
    while(dec>0){
        if(dec%2==0){
            bin = "0" + bin;
        }
        else{
            bin = "1" + bin;
        }
        dec/=2;
    }
    return bin;
}

void crc8(string input){
    int crc8 = binToDec("100000111");
    string input2=input+"00000000";
    int decInput = binToDec(input2);
    string crc = decToBin(decInput%crc8);
    if(crc.length()<8){
        int k = 8 - crc.length();
        for(int i=0;i<k;i++){
            crc = "0" + crc;
        }
    }
    cout << input + crc << endl;
}

void crc10(string input){
    int crc10 = binToDec("11000110101");
    string input2=input+"0000000000";
    int decInput = binToDec(input2);
    string crc = decToBin(decInput%crc10);
    if(crc.length()<10){
        int k = 10 - crc.length();
        for(int i=0;i<k;i++){
            crc = "0" + crc;
        }
    }
    cout << input + crc << endl;
}

void itu16(string input){
    int itu16 = binToDec("10001000000100001");
    string input2 = input + "0000000000000000";
    int decInput = binToDec(input2);
    string crc = decToBin(decInput%itu16);
    if(crc.length()<16){
        int k = 16 - crc.length();
        for(int i=0;i<k;i++){
            crc = "0" + crc;
        }
    }
    cout << input + crc << endl;
}


int main(){
    string input;
    int c = 0;
    cout << "Enter desired string in binary: ";
    cin >> input;

    cout << "Enter designated number to select divisor:\n1 for CRC8\n2 for CRC10\n3 for ITU16\n4 to exit\n";
    while(c!=4){
        cout << "Enter the choice:";
        cin >> c;
        switch (c)
        {
        case 1:
            crc8(input);
            break;
        case 2:
            crc10(input);
            break;
        case 3:
            itu16(input);
            break;
        case 4:
            cout << "Goodbye!!";
            break;
        default:
            cout << "invalid input";
            break;
        }
    }
}