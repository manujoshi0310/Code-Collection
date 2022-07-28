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

    int temp =max(max(l,r) + root->info, root->info);
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