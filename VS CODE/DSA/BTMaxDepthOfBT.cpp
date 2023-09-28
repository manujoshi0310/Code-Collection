#include<bits/stdc++.h>

using namespace std;

class Node{   
    public:
        int data;
        Node* left;
        Node* right;
        //constructor works!!!
        Node(int x){
            this->data = x;
            this->left = NULL;
            this->right = NULL;
        }
};

int maxDepthRec(Node* root){
    if(root==NULL)return 0;

    int leftDepth = maxDepthRec(root->left);
    int rightDepth = maxDepthRec(root->right);

    return 1+max(leftDepth, rightDepth);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->left->right->left = new Node(5);
    root->left->right->right = new Node(6);

    cout << maxDepthRec(root);

    return 0;
}