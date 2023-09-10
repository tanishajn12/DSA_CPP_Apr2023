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

void deleteAtIndex(node*& head, int i){

    //1. get the poinetr at the ith index
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

    insertAtHead(head,50);
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);

    printLinkedList(head);

    deleteAtIndex(head,2);

    printLinkedList(head);

    return 0;

}


