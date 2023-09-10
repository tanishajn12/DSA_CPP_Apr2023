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

node* intersectionHead(node* head1, node* head2) {
    while(head2) {
        node* temp=head1;

        while(temp) {
            //if both nodes are same
            if(temp->data == head2->data) {
                return head2;
            }
            temp=temp->next;
        }
        head2=head2->next;
    }
    //no intersection found
    return NULL;
}

int main() {
    int m, n;
    cin>>m>>n;

    node* head1=NULL;
    node* head2=NULL;

    for(int i=0; i<m; i++) {
        int a;
        cin>>a;
        insertAtTail(head1,a);
    }

    for(int i=0; i<n; i++) {
        int b;
        cin>>b;
        insertAtTail(head2,b);
    }

    node* head=intersectionHead(head1,head2);

    if(!head) {
        cout<<"No intersection point found!";
    }

    else{
        cout<<"Intersection Point: "<<head->data<<endl;
    }
    return 0;
}