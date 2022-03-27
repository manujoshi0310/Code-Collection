#include<iostream>
using namespace std;
void mixture(int a, int b){
    if(a>0 && b>0){
        cout << "Solution\n";
    }
    else if(a==0){
        cout << "Liquid\n";
    }
    else if(b==0){
        cout << "Solid\n";
    }
}
int main(){
    int repeat, a, b;
    cin >> repeat;
    for(int i=0;i<repeat;i++){
        cin >> a >> b;
        mixture(a,b);
    }

}