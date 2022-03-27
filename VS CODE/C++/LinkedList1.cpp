#include<iostream>
using namespace std;

class Node{
    public:
        int info;
        Node* next;
};

class Llist{
    private:
        Node* head;
    public:
        Llist(){
            head = NULL;
        }
        ~Llist();
        
        int isEmpty(){
            if(head==NULL){
                return 1;
            }
            else return 0;
        }
        void traverseInOrder(){
            Node* ptr;
            ptr = head;
            while(ptr!=NULL){
                cout << "  " << ptr->info;
                ptr = ptr->next;
            }
        }
        void traverseReverse(Node* head);
        void traverseReverseOrder();
        void traverseReverseRecursive(Node* ptr){
            if(ptr->next!=NULL){
                traverseReverseRecursive(ptr->next);
            }
            cout << "  " << ptr->info;
        }
        void insertAtBeginning(int item){
            Node* ptr = new Node();
            ptr->info = item;
            if(head==NULL){
                ptr->next==NULL;
            }
            else ptr->next = head;
            head=ptr;
        }
        void insertAtEnd(int item){
            Node *ptr, *loc;
            ptr = new Node();
            ptr->info = item;
            ptr->next = NULL;
            if(head==NULL)head=ptr;
            else{
                loc = head;
                while(loc->next!=NULL){
                    loc = loc->next;
                }
                loc->next = ptr;
            }
        }
        void insertAfterElement(int item, int after){
            Node *ptr1, *ptr2;
            ptr1 = head;
            while(ptr1!=NULL){
                if(ptr1->info==after){
                    break;
                }
                ptr1=ptr1->next;
            }
            if(ptr1==NULL){
                cout << "\nElement " << after << " not found\n\n";
                return;
            }
            ptr2 = new Node();
            ptr2->info = item;
            ptr2->next = ptr1->next;
            ptr1->next = ptr2;
        }
        void deleteFromBeginning(){
            Node* ptr;
            if(head==NULL)return;
            else{
                ptr = head;
                head = head->next;
                delete ptr;
            }
        }
        void deleteFromEnd(){
            Node *ptr, *loc;
            if(head==NULL)return;
            else if(head->next==NULL){
                ptr = head;
                head = NULL;
                delete ptr;
            }
            else{
                loc = head;
                ptr = head->next;
                while(ptr->next!=NULL){
                    loc = ptr;
                    ptr = ptr->next;
                }
                loc->next = NULL;
                delete ptr;
            }
        }
        void deleteElement(int element){
            Node *loc, *ploc;
            ploc = NULL;
            loc = head;
            while((loc->info != element)&&(loc!=NULL)){
                ploc = loc;
                loc = loc->next;
            }
            if(loc->info == element){
                ploc->next = loc->next;
                delete loc;
            }
        }
        void deleteAfterElement(int after){
            Node *ptr1, *ptr2;
            ptr1 = head;
            while(ptr1!=NULL){
                if(ptr1->info==after){
                    break;
                }
                ptr1=ptr1->next;
            }
            if(ptr1==NULL){
                cout << "\nElement " << after << " not found\n\n";
                return;
            }
            ptr2 = ptr1->next;
            ptr1->next = ptr2->next;
            delete ptr2;
        }
        void reverseList();
};

int main(){
    int len,c;
    Node *head = new Node(); 
    Node *ptr = new Node();

    ptr = head->next;
    cout << "Enter length of LL:";
    cin >> len;
    
    for (int i = 0; i < len; i++)
    {
        cin >> ptr->info;
        ptr = ptr->next;
    }
    ptr = head->next;
    for (int i = 0; i < len; i++)
    {
        cout << ptr->info;
        ptr = ptr->next;
    }
    
    

}