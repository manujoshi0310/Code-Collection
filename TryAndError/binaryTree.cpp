#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int info;
        Node* right;
        Node* left;
};

class BTree{
    private:
        Node* head;
    
    public:
        Node* leftTraverse(Node* head){
            return(head->left);
        }
        Node* rightTraverse(Node* head){
            return(head->right);
        }

        void createHead(Node* head, int value){
            head->info = value;
        }

        
};

int main(){

}