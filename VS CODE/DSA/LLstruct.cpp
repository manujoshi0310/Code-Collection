#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* next = NULL;
};

struct Node* addNode( int val){
    Node* n1 = new Node;
    n1->data=val;
    n1->next=NULL;
    return n1;
}

int main(){
    struct Node* head, *nxt;
    head->next=nxt;
    for(int i=0;i<5;i++){
        nxt->next = addNode(i);
        nxt=nxt->next;
    }
    nxt=head->next;
    while(nxt->next!=NULL){
        cout << nxt->data << endl;
        nxt=nxt->next;
    }
    return 0;
}