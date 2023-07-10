#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int data){
    Node* newNode = new Node(data);
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp -> next = newNode;
}

void printList(Node* &head){
    Node* ptr = head;
    while(ptr!=NULL){
        cout << ptr->data << "  ";
        ptr=ptr->next;
    }
    cout<<endl;
}

int main(){

    Node* head = NULL, *ptr;
    Node* n1 = new Node(10);
    head = n1;
    
    printList(head);

    //inserting elements
    insertAtHead(head, 12);
    insertAtTail(head, 13);
    insertAtTail(head, 14);

    printList(head);

}