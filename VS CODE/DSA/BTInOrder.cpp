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

void inOrder(Node* root){
    if(root==NULL)return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}

void iterativeInOrder(Node* root){
    stack<Node*> stk;
    // stk.push(root);
    Node *temp=root, *top;
    while(true){
        if(temp!=NULL){
            stk.push(temp);
            temp = temp->left;
        }
        else{
            if(stk.empty())break;
            temp = stk.top();
            stk.pop();
            cout << temp->data << " ";
            temp = temp->right;
        }
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

    iterativeInOrder(root);
    cout << endl;
    inOrder(root);

    return 0;
}