#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    public:
        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }

        void preOrder(Node* root){
            if(root==NULL)return;
            cout << root->data << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
        
        void inOrder(Node* root){
            if(root==NULL)return;
            inOrder(root->left);
            cout << root->data << " ";
            inOrder(root->right);
        }
        
        void postOrder(Node* root){
            if(root==NULL)return;
            postOrder(root->left);
            postOrder(root->right);
            cout << root->data << " ";
        }
};

int main(){
    Node* root = new Node(3);
    root->left = new Node(2);
    root->left->left = new Node(5);
    root->left->right = new Node(4);
    root->right = new Node(1);
    root->right->left = new Node(8);
    root->right->right = new Node(6);

    root->preOrder(root);
    cout << "\n";
    root->inOrder(root);
    cout << "\n";
    root->postOrder(root);

    return 0;
}