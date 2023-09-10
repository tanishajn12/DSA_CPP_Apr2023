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

node* sortList(node* head) {
    int count[3]={0,0,0}; //initialise count of '0','1','2' as 0
    node* curr=head;

    //count the number of 0,1,2
    while(curr!=NULL) {
        count[curr->data]++;
        curr=curr->next;
    }

    curr=head;
    int i=0;
    //n1=count[0], n2=count[1], n2=count[2]

    //fill the list with 0 till n1>0, with 1 till n2>0 and with 2 till n3>0
    while(curr!=NULL) {
        if(count[i]==0){
            i++;
        }

        else{
            curr->data=i;
            count[i]--;
            curr=curr->next;
        }
    }

    return head;
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

    head=sortList(head);
    printLinkedList(head);

    return 0;
}