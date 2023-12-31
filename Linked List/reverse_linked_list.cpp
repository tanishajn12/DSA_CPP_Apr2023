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

node* reverseIterative(node* head) {
    node* prev=NULL;
    node* cur= head;

    while(cur) {//cur!=NULL
        node* temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }

    return prev;
}


int main() {
    node* head=NULL; //initially linked list is empty

    insertAtHead(head,50);
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);

    printLinkedList(head);

    head= reverseIterative(head); //return the head of linked list

    printLinkedList(head);

    return 0;

}




