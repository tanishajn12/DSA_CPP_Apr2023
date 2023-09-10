#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int data) {
            this->data= data;
            this->next = NULL;
        }
};

void insertAtHead(node*& head, int data) {
    node* n=new node(data);
    n->next=head;
    head=n;
}

void printLinkedList(node* head) {
    while(head!=NULL) {
        cout<<head->data << " ";
        head=head->next;
    }
    cout<<endl;
}

node* getMidPoint(node* head) {
    node* slow=head;
    node* fast=head->next;

    while(fast and fast->next) { //fast!=NULL and fast->next!=NULL
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

node* insertAtMiddle(node*& head,int data) {
    node* n=new node(data);
    node* mid=getMidPoint(head);

    n->next=mid->next;
    mid->next=n;

    return head;
}



int main() {
    node* head=NULL; //initially linked list is empty
    insertAtHead(head,50);
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);
    
    printLinkedList(head);

    insertAtMiddle(head,60);

    printLinkedList(head);

    return 0;
}

