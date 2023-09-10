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
node*  sortedInsert(node* sortedHead, node* curr) {
    //insertion at the first position
    if(sortedHead==NULL || sortedHead->data >=curr->data) {
        curr->next=sortedHead;
        return curr;
    }

    else{
        //skip all nodes having value less than curr->data
        node* temp=sortedHead;
        while(temp->next!=NULL && temp->next->data < curr->data) {
            temp=temp->next;
        }

        curr->next=temp->next;
        temp->next=curr;
    }
    return sortedHead;
}

node* List(node* head) {
    //initialize sorted linked list
    node* sortedHead=NULL;  //track the head of sorted list 
    node* curr=head; //track the current elemebt

    //traverse the given linked list and insert every node to sorted
    while(curr!=NULL) {
        //store nexthead for next iteration i.e currNext
        node* currNext=curr->next;

        //insert curr in sorted linked list using sortedInsert
        sortedHead=sortedInsert(sortedHead,curr);

        //move the curr pointer to next node
        curr=currNext;
    }

    return sortedHead;
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
    head=List(head);
    printLinkedList(head);
    return 0;
}

