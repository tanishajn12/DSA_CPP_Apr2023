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
    while(head!=NULL){//NULL OR 0 OR FALSE
        cout <<head->data << " ";
        head=head->next;
    }
}

node* getNode(node* head, int j) {
    int k=0;
    node* temp=head;
    while(k<j && temp) { //k<j and temp!=NULL
        temp=temp->next;
        k++;
    }
    return temp;
}

void insertAtIndex(node*& head, int data, int i) {

    if(i==0) {
        insertAtHead(head,data);
        return;
    }
    //1. create a new node with the given data
    node* n= new node(data);

    //2. get hold of the pointer to the node at the i-1 th index
    node* prev=getNode(head,i-1);
    if(!prev) {//prev==NULL
        //index 'i' exceeds the length of linked list
        return;

    }

    //3.update the next field of newly created node such that
    //it holds the address of the node that comes after the prev node
    n->next=prev->next;

    //4.update the next field of the prev node such that it holds
    //the address of the newly created node
    prev->next=n;

}


int main(){
    node* head= NULL; //representing entire linked list
    
    head= insertAtHead(head, 50);
    head= insertAtHead(head, 40);
    head=insertAtHead(head, 30);
    head=insertAtHead(head, 20);
    head=insertAtHead(head, 10);

    printLinkedList(head);
    cout<<endl;

    insertAtIndex(head,25,2);

    printLinkedList(head);

    return 0;
}

