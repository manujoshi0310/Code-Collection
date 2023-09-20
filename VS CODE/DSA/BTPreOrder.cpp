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

void iterativePreorder(Node* root){
    stack<Node*> stk;
    stk.push(root);
    Node* temp = root;
    Node* child;
    while(!stk.empty()){
        cout << stk.top()->data << " ";
        child = stk.top();
        stk.pop();
        if (child->right) {
            stk.push(child->right);
        }
        if (child->left) {
            stk.push(child->left);
        }        
    }
}

void preOrder(Node* root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

int main(){
    Node* root = new Node(1);
    // root->data = 1;
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->left->right->left = new Node(5);
    root->left->right->right = new Node(6);

    iterativePreorder(root);
    cout << endl;
    preOrder(root);
    return 0;
}