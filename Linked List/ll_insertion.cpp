#include<iostream>
using namespace std;

class node {
    public :
        int data;
        node* next;

        node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

node* insertAtHead(node* head, int data){ 
    //1. create a new node on heap with given data
    node* n=new node(data);

    //2. update the next pointer of the newly created node
    //such that it holds the address of current head
    n->next=head;

    //3. make the newly created node as the new head of the linked list
    head=n;
    return head; 
    
}
void printLinkedList(node* head) {
    // while(head!=NULL){//NULL OR 0 OR FALSE
    //     cout <<head->data << " ";
    //     head=head->next;
    // }

    while(head){ //head!=NULL
        cout <<head->data << " ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    node* head= NULL; //representing entire linked list
    
    head= insertAtHead(head, 50);
    head= insertAtHead(head, 40);
    head=insertAtHead(head, 30);
    head=insertAtHead(head, 20);
    head=insertAtHead(head, 10);

    printLinkedList(head);

    return 0;
}

