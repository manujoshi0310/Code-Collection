#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int info;
        Node* left;
        Node* right;
};

int solve(Node* root, int &res){
    
    if(root==NULL) return 0;

    int l = solve(root->left, res);
    int r = solve(root->right, res);

    int temp =max(l,r) + root->info;

    if(root->left == NULL && root->right == NULL) temp = max(temp,root->info); 
    // ABOVE LINE IS NOT NECCESARY AS LEFT AND RIGHT OF LEAF WILL ALWAYS BE ZERO SO IT WONT AFECT THE ACTUAL EQN

    int ans = max(temp,root->info+l+r);

    res = max(res, ans);

    return temp;
}

int main(){
    Node* root;
    int res = INT_MIN;
    solve(root,res);
    return 0;
}