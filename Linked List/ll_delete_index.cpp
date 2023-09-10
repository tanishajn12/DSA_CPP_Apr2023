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
    //1. create a new node on heap with the given data
    node* n= new node(data);

    //2. get hold of the pointer to the tail node
    node* tail=getTail(head);

    //3. update the next field of the tail node such that it
    //contains the address of the newly created node
    tail->next=n;
}

void printLinkedList(node* head) {
    while(head!=NULL) {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

node* getNode(node* temp, int j){
    int k=0;
    while(temp!=NULL && k<j){ //while(temp && k<j)
        temp=temp->next;
        k++;
    }

    return temp;
}

void deleteAtHead(node*& head) {
    if(!head) { //head==NULL
        return;
    }

    node* temp=head;
    head=head->next; 
    delete temp;
}

void deleteAtIndex(node*& head, int i){

    if(i==0) {
        deleteAtHead(head); //corner case
        return;
    }

    //1. get the pointer at the ith index
    node* cur= getNode(head,i);

    //2. get hold of the pointer to the node at i-1 index
    node* prev= getNode(head,i-1);

    //3. update the next field of the prev node such that it holds the 
    //address of the node that comes after curr node
    prev->next=cur->next;

    //4. delete the current node;
    delete cur;
}

int main() {
    node* head=NULL; //linked list is initially empty

    int n,t;
    cin>>n>>t;  //n is number of nodes in linked list
    //t is number of queries

    for(int i=0; i<n; i++) {
        int l;
        cin>>l;
        if(i==0){
            insertAtHead(head,l);
        }else{
            insertAtTail(head,l);
        }
    }

    for(int u=0; u<t; u++) {
        
        int a;
        cin>>a; //a is the index number to be deleted

        deleteAtIndex(head,a);
        
        printLinkedList(head);
    }

    return 0;

}


