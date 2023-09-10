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
    node* n= new node(data);
    node* tail=getTail(head);
    tail->next=n;
}

void printLinkedList(node* head) {
    while(head!=NULL) {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void selectionSort(node* head) {
    
    while(head!=NULL) {
        node* curr=head;
        node* minHead=head;
        node* adjHead=head->next;

        while(adjHead!=NULL) {
            if(adjHead->data < minHead->data){
                minHead=adjHead;
            }
            adjHead=adjHead->next;
        }

        int x=curr->data;
        curr->data=minHead->data;
        minHead->data=x;
        
        head=head->next;
    
    }
}

int main() {
    node* head=NULL;

    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        int a;
        cin>>a;
        insertAtTail(head,a);   
    }

    selectionSort(head);
    printLinkedList(head);

    return 0;
}

