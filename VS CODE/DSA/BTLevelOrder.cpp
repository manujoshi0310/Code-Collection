#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void levelOrder(Node* root){
    vector<int> ans;
    queue<Node*> q;
    if(root==NULL)return;
    q.push(root);
    while(!q.empty()){
        if(q.front()->left)q.push(q.front()->left);
        if(q.front()->right)q.push(q.front()->right);
        ans.push_back(q.front()->data);
        q.pop();
    }
    for(auto x:ans){
        cout << x << " ";
    }

}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->left->right->left = new Node(5);
    root->left->right->right = new Node(6);

    levelOrder(root);

    return 0;
}