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

node* removeDuplicates(node* head) {
    //base case
    if(!head or !head->next) { //if linked list has 0 or 1 node
        //head==NULL, head->next==NULL
        return head;
    }

    //recursive case
    if(head->data!=head->next->data) {
        //head node is unique node i.e it will be the head of the final linked list

        //1. ask your friend to remove duplicates from the linked list that 
        //starts from node which comes after head node

        node* headFromMyFriend= removeDuplicates(head->next);
        head->next=headFromMyFriend;
        return head;
    }

    else{
        //head node is a duplicate node
        while(head->next && head->data==head->next->data){
            head=head->next;
        }
        //ask your friend to remove duplicates from the linked list that 
        //starts from node which comes after head node
        node* headFromMyFriend= removeDuplicates(head->next);
        return headFromMyFriend;
    }
}

int main() {
    node* head=NULL; //initially linked list is empty
    insertAtHead(head,50);
    insertAtHead(head,50);
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);
    insertAtHead(head,10);
    insertAtHead(head,10);

    printLinkedList(head);
    
    head=removeDuplicates(head);
    
    printLinkedList(head);

    return 0;
}













 
 