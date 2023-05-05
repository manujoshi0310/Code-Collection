#include<bits/stdc++.h>

using namespace std;

int comedy(vector<int> jokes){
    int alice=0,bob=0;
    int sum=0,jk=0;
    for(auto x:jokes)sum+=x;
    while(sum!=0){
        if(jokes[0]>0){
            alice+=jokes[0];
            bob+=jokes[0];
            sum-=jokes[0];
            jk+=jokes[0];
            jokes[0]=0;
        }
        else{
            if(alice==0 && jokes[2]==0){
                jk+=1;
                break;
            }
            else if(bob==0 && jokes[1]==0){
                jk+=1;
                break;
            }
            else if(alice<jokes[1]){
                sum-=alice;
                jk+=alice; 
                jokes[1]-=alice;
                bob+=alice;
                alice=0;
            }
            else if(alice>jokes[1]){
                alice-=jokes[1];
                bob+=jokes[1];
                jk+=jokes[1];
                sum-=jokes[1];
                jokes[1]=0;
            }
            else if(bob<jokes[2]){
                sum-=bob;
                jk+=bob;
                jokes[2]-=bob;
                alice+=bob;
                bob=0;
            }
            else if(bob>jokes[2]){
                bob-=jokes[2];
                alice+=jokes[2];
                jk+=jokes[2];
                sum-=jokes[2];
                jokes[2];
            }
        }
    }
    return jk;
}

int main(){
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        vector<int> v;
        int x;
        for(int i=0;i<4;i++){
            cin >> x;
            v.push_back(x);
        }
        ans.push_back(comedy(v));
    }
    for(auto x:ans)cout<<x<<endl;


    return 0;
}