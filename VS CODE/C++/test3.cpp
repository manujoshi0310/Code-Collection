#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr;
    int ipt;
    cin >> ipt;
    while(ipt>=0){
        arr.push_back(ipt);
        cin>>ipt;
    }
    int cnt=0;
    vector<int> op;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<100){
            sum+=arr[i];
            cnt++;
        }
        else{
            if(cnt>0){
                op.push_back(sum);
                cnt=0;
                sum=0;
                op.push_back(arr[i]);
            }
            else {op.push_back(arr[i]);}
        }
    }
    for(int i=0;i<op.size();i++){
        cout << op[i] << "\n";
    }
    return 0;
}