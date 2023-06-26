#include<bits/stdc++.h>

using namespace std;

vector<int> factorial(int N){
        // code here
        vector<int> fact{1};
        int carry=0;
        for(int i=1;i<=N;i++){
            for(int j=0;j<fact.size();j++){
                int mlt = (i*fact[j])+carry;
                if(mlt>=10){
                    fact[j] = mlt%10;
                    carry = mlt/10;
                }
                else{
                    fact[j] = mlt;
                    carry=0;
                }
                if(j==(fact.size()-1)&&carry>0)fact.push_back(0);
            }
        }
        for(auto x:fact)cout<<x<< " ";
        int i=0,j=fact.size()-1;
        while(i<j){
            swap(fact[i],fact[j]);
            i++;
            j--;
        }
        return fact;
    }

int main(){
    vector<int> ans = factorial(4);
    cout << endl << "Ans:";
    for(auto x:ans)cout<<x<< " ";
}