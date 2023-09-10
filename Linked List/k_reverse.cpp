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

node* kReverse(node* head,int k){
    //base case
    if(!head) { //head==NULL
        return head;
    }

    //recursive case
    //1. reverse the first k nodes of the linked list
    int i=0;
    node* cur=head;
    node* prev=NULL;

    while(cur && i<k) {//cur!=NULL and i!=k
        node* temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
        i++;
    }

    //2. ask your friend to k-reverse the sublist which is composed of last n-k nodes
    node* headFromMyFriend= kReverse(cur,k); 
    //temp not used as it is part of previous loop

    head->next=headFromMyFriend;
    return prev;
}


int main() {
    node* head=NULL; //initially linked list is empty
    insertAtHead(head,80);
    insertAtHead(head,70);
    insertAtHead(head,60);
    insertAtHead(head,50);
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);

    printLinkedList(head);
    int k=3;

    head= kReverse(head,k);
    printLinkedList(head);

    return 0;
}





