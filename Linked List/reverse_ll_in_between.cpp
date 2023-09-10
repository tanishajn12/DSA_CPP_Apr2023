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
        cout<<head->data << " ";
        head=head->next;
    }
    cout<<endl;
}

node* reverseIterative(node*& head) {
    node* p=NULL; //p:previous node
    node* cur= head;

    while(cur) {//cur!=NULL
        node* temp=cur->next;
        cur->next=p;
        p=cur;
        cur=temp;
    }
    return p;
}

node* reverseBetween(node*& head, int m ,int n) {
   if(m==n) {
    return head;
   }

    node* start=NULL; //start node of reversing list
    node* prev=NULL; //prev node of start node
    node* end= NULL;  // end node of reversing list
    node* end_next=NULL;  //next node of end node

    int i=1;
    node* curr=head;
    while(curr && i<=n) {
        if(i<m) {
            prev=curr;
        }

        if(i==m) {
            start=curr;
        }

        if(i==n) {
            end=curr;
            end_next=curr->next;
        }

        curr=curr->next;
        i++;
    }

    end->next=NULL;
    end=reverseIterative(start); //reverse linked list starting with start node

    //if the starting position was not head
    if(prev) {
        prev->next=end;
    }
    //if starting position was head
    else{
        head=end;
    }

    start->next=end_next;
    return head;
}


int main() {
    node* head=NULL; //initially linked list is empty

    int t;
    cin>>t;
    for(int i=0; i<t; i++) {
        int a;
        cin>>a;
        insertAtTail(head,a);
    }

    int m, n; //m: left node , n:right node
    cin>>m>>n;

    head=reverseBetween(head,m,n); //return the head of linked list
    printLinkedList(head);

    return 0;

}

