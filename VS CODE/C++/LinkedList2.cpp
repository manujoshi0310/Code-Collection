//Doubly Linked List

#include<iostream>

using namespace std;

class Node{
    public:
        Node* prev;
        Node* next;
        int data;
};

class DLL{
    private:
        Node *head, *tail;
    public:
        DLL(){
            head = NULL;
            tail = NULL;
            head->prev = NULL;
        }
        ~DLL();

        int isEmpty(){
            if(head==NULL){
                return 1;
            }
            else return 0;
        }

        void traverseForward(){
            Node* ptr = head;
            while(ptr!=NULL){
                cout << " " << ptr->data;
                ptr = ptr->next;
            }
        }

        void traverseBackward(){
            Node* ptr = head;
            while(ptr!=NULL){
                cout << " " << ptr->data;
                ptr = ptr->prev;
            }
        }

        Node *search(int item){
            Node* ptr = head;
            while(ptr!=NULL){
                if(ptr->data==item){
                    return ptr;
                }
                ptr=ptr->next;
            }
            return NULL;
        }

        void insBeginning(int item){
            Node* ptr = new Node();
            ptr->data = item;
            if(head==NULL){
                ptr->next = ptr->prev = NULL;
                head = tail = ptr;
            }
            else{
                ptr->next = head->next;
                ptr->prev = head;
                head->next = ptr;
            }
        }

        void insEnding(int item){
            Node* ptr = new Node();
            ptr->data = item;
            if(head==NULL){
                ptr->next = ptr->prev = NULL;
                head = tail = ptr;
            }
            else{
                ptr->prev = tail->prev;
                ptr->next = tail;
                tail->prev = ptr;
            }
        }

        void insAfter(int item, int after){
            Node* ptr1 = new Node();
            Node* ptr2 = new Node();
            ptr1->data = item;
            ptr2=head;
            while(ptr2!=NULL){
                if(ptr2->data == after){
                    ptr1->next = ptr2->next;
                    ptr1->prev = ptr2;
                    ptr2->next = ptr1;
                    ptr2=ptr1->next;
                    ptr2->prev = ptr1;
                    break;
                }
                ptr2=ptr2->next;
            }
        }

        void insBefore(int item, int before){
            Node *ptr1, *ptr2;
            ptr1->data = item;
            ptr2 = tail;
            while(ptr2!=NULL){
                if(ptr2->data == before){
                    ptr1->next = ptr2;
                    ptr1->prev = ptr2->prev;
                    ptr2->prev = ptr1;
                    ptr2 = ptr1->prev;
                    ptr2->next = ptr1;
                    break;
                }
                ptr2=ptr2->prev;
            }
        }

        void delBeginning(){
            Node* ptr = head->next;
            head->next = ptr->next;
            (ptr->next)->prev = head;
            delete ptr; 
        }
        
        void delEnding(){
            Node* ptr = tail->prev;
            tail->prev = ptr->prev;
            (ptr->prev)->next = tail;
            delete ptr; 
        }

        void delAfter(int after){
            Node* ptr = head;
            while(ptr!=NULL){
                if(ptr->data = after){
                    (ptr->next)->prev = 
                    ptr->next = (ptr->next)->next;

                }
            }
        }
};


int main(){
    
}