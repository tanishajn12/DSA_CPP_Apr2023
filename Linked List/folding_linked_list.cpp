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

node* getMidPoint(node* head) {
    node* slow=head;
    node* fast=head->next;

    while(fast and fast->next) { //fast!=NULL and fast->next!=NULL
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
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

node* foldLinkedList(node* head) {
    if(!head || !head->next) {
        return head;
    }
    node* midHead= getMidPoint(head);
    node* newHead= midHead->next;
    midHead->next=NULL;
    newHead= reverseIterative(newHead);

    node* l1=head;
    node* l2=newHead;
    node* f1=NULL;
    node* f2=NULL;

    while(l2!=NULL) {
        f1=l1->next;
        f2=l2->next;

        l1->next=l2;
        l2->next=f1;

        //move the pointer
        l1=f1;
        l2=f2;
    }
    return head;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        node* head=NULL;

        for(int i=0; i<n;i++ ){
            int a;
            cin>>a;
            insertAtTail(head,a);
        }

        head=foldLinkedList(head);
        printLinkedList(head);
    }

    return 0;
}


