#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node *left, *right;
        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }    
};

int maxDepth(Node*);
//O(N)
int check(Node* root){
    if(root==NULL)return 0;

    int lh = check(root->left);
    int rh = check(root->right);

    //check if not balanced in any node, if any of lh or rh return -1 then it is unbalanced
    if(lh == -1 || rh == -1 || abs(lh-rh)>1){
        return -1;
    }

    return 1+max(lh,rh);
}

//O(NlogN)
bool checkBalanced(Node* root){
    if(root==NULL){
        return true;
    }
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    if(abs(lh-rh)>1){
        return false;
    }

    bool left = checkBalanced(root->left);
    bool right = checkBalanced(root->right);

    if(!left||!right){
        return false;
    }
    return true;
}

int maxDepth(Node *root){
    if(root==NULL)return 0;

    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    return max(lh,rh)+1;
}
int main(){
    Node* root = new Node(1);
    root->left=new Node(-2);
    root->left->right=new Node(-1);
    root->left->left=new Node(-3);
    root->right=new Node(2);
    root->right->right=new Node(5);
    // root->right->right->left=new Node(4);
    cout<<"Is tree balanced : "<< (checkBalanced(root)? "Yes": "No") <<endl;
    cout << "Print max height of balanced tree: " << check(root) << endl;
    return 0;
}