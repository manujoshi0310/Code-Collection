#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    } 
};

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

//get lenght of the list
int getLength(Node* head){

    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,int d){

    Node* temp = new Node(d);
    temp->next = head;
    if (head != NULL) {
        head->prev = temp;
    }
    head = temp;
}

void insertAtTail(Node* &tail,int d){

    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node* head,Node* &tail,int position,int d){

    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    //insert at last positiom
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }

    //insert at middle position
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,11);
    print(head);

    insertAtTail(tail,25);
    print(head);

    insertAtPosition(head,tail,2,100);
    print(head);

    insertAtPosition(head,tail,1,101);
    insertAtPosition(head,tail,6,105);
    print(head);

    return 0;


}