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

node* oddEvenArrange(node* &head ) {
    //corner case
    if(head==NULL) {
        return NULL;
    }

    node* odd=head;
    node* even=head->next;
    node* evenHead=even; //track the first node of even linked list

    while(true){
        //used in the case where there is even numnber of nodes
        //if no nodes left then connect the odd even nodes
        if(!odd || !even || !(even->next)) {
            odd->next=evenHead;
            break;
        }

        //connecting odd nodes
        odd->next=even->next;
        odd=even->next;

        //used when linked list has odd number of nodes
        if(odd->next==NULL) {
            even->next=NULL;
            odd->next=evenHead;
            break;
        }

        //connecting even nodes
        even->next=odd->next;
        even=odd->next;
    }

    return head;
}

int main() {
    node* head=NULL; //linked list is initially empty

    int n;
    cin>>n;

    for(int i=0; i<n; i++ ){
        int l;
        cin>>l;
        insertAtTail(head,l);
    }

    cout<<"Original List: ";
    printLinkedList(head);

    head=oddEvenArrange(head);

    cout<<"Modified List: ";
    printLinkedList(head);

    return 0;

}


