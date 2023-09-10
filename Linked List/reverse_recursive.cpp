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

node* reverseRecursive(node* head){
    //base case
    if(head==NULL){ //(!head)
        return head; //return NULL
        //empty linked list reverse is same
    }

    if(head->next==NULL) { //(!head->next==NULL)
        return head;
        //linked list with single element
    }
    //recursive case
    //1. ask your firend to reverse the sub-list which starts from 
    //the node that comes after the head node
    node* revHead= reverseRecursive(head->next);
    node* revTail= head->next;
    revTail->next=head;
    head->next=NULL;

    return revHead;
}

int main() {
    node* head=NULL; //initially linked list is empty
    insertAtHead(head,50);
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);

    printLinkedList(head);

    head= reverseRecursive(head); //return the head of linked list
    printLinkedList(head);

    return 0;
}




