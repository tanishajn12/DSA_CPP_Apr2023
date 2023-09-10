#include<iostream>
using namespace std;

class node {
    public :
        int data;
        node* next;

        node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

node* insertAtHead(node* head, int data){ 
    //1. create a new node on heap with given data
    node* n=new node(data);

    //2. update the next pointer of the newly created node
    //such that it holds the address of current head
    n->next=head;

    //3. make the newly created node as the new head of the linked list
    head=n;
    return head; 
}


void printLinkedList(node* head) {
    while(head!=NULL){//NULL OR 0 OR FALSE
        cout <<head->data << " ";
        head=head->next;
    }
}

node* getTail(node* head) {
    node* temp=head;
    while(temp->next!=NULL) {
        temp=temp->next;

    }

    return temp;
}
void insertAtTail(node*& head, int data) {

    if(head==NULL) { //!head
        insertAtHead(head,data);
        return;
    }
    //1. create a new node on heap with the given data
    node* n= new node(data);

    //2. get hold of the pointer to the tail node
    node* tail=getTail(head);

    //3. update the next field of the tail node such that it
    //contains the address of the newly created node
    tail->next=n;
}
int main(){
    node* head= NULL; //representing entire linked list
    
    head= insertAtHead(head, 50);
    head= insertAtHead(head, 40);
    head=insertAtHead(head, 30);
    head=insertAtHead(head, 20);
    head=insertAtHead(head, 10);

    printLinkedList(head); //initial linked list
    cout<<endl;

    insertAtTail(head,60);
    printLinkedList(head); //final linked list

    return 0;
}

