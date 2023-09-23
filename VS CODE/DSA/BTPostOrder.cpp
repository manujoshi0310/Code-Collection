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

void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void iterativePostOrder2S(Node* root){
    stack<Node*> s1, s2;
    s1.push(root);
    Node* temp;
    while(!s1.empty()){
        temp = s1.top();
        s1.pop();
        s2.push(temp);
        if(temp->left){
            s1.push(temp->left);
        }
        if(temp->right){
            s1.push(temp->right);
        }
    }
    while(!s2.empty()){
        cout << s2.top()->data << " ";
        s2.pop();
    }
}

void iterativePostOrder1S(Node* root){
    Node* curr = root, *temp;
    stack<Node*> st;
    while(curr!=NULL || !st.empty()){
        if(curr!=NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            temp = st.top()->right;
            if(temp==NULL){
                temp = st.top();
                st.pop();
                cout << temp->data << " ";
                while(!st.empty() && temp==st.top()->right){
                    temp = st.top();
                    st.pop();
                    cout << temp->data << " ";
                }
            }
            else{
                curr = temp;
            }
        }
    }
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

    iterativePostOrder2S(root);
    cout << endl;
    iterativePostOrder1S(root);
    cout << endl;
    postOrder(root);

    return 0;
}