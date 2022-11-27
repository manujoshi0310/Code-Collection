#include<bits/stdc++.h>

using namespace std;

struct Node{
    int value;
    struct Node* left;
    struct Node* right;
};

// Node* newNode(int val){
//     Node* node;
//     node->value = val;
//     node->left = NULL;
//     node->right = NULL;
//     return node;
// }

void preOrder(Node* node){
    // cout << "2\n";
    if(node==NULL)return;
    cout << node->value << "\t";
    preOrder(node->left);
    preOrder(node->right);
}
void inOrder(Node* node){
    // cout << "2\n";
    if(node==NULL)return;
    inOrder(node->left);
    cout << node->value << "\t";
    inOrder(node->right);
}
void postOrder(Node* node){
    // cout << "2\n";
    if(node==NULL)return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->value << "\t";
}

struct Node * newNode(int data) {
  struct Node * node = (struct Node * ) malloc(sizeof(struct Node));
  node -> value = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}

int main(){
    struct Node * root = newNode(1);
    root -> left = newNode(2);
    root -> right = newNode(3);
    root -> left -> left = newNode(4);
    root -> left -> right = newNode(5);
    root -> left -> right -> left = newNode(8);
    root -> right -> left = newNode(6);
    root -> right -> right = newNode(7);
    root -> right -> right -> left = newNode(9);
    root -> right -> right -> right = newNode(10);
    vector<int> op;
    preOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    postOrder(root);
    // for(int i=0;i<op.size();i++)cout << op[i] << " ";
    return 0;
}