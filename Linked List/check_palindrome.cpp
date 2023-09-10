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

node* getMidPoint(node* head) {
    node* slow=head;
    node* fast=head->next;

    while(fast and fast->next) { //fast!=NULL and fast->next!=NULL
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

node* reverseIterative(node* head) {
    node* prev=NULL;
    node* cur= head;

    while(cur) {//cur!=NULL
        node* temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }

    return prev;
}

bool checkPalindrome(node* head) {

    //divide the linked list into two sublists around the midpoint
    node* midPoint=getMidPoint(head);
    node* head2=midPoint->next;
    midPoint->next=NULL;

    //2.reverse the second sublist
    head2=reverseIterative(head2);

    //3. compare the first subList with the second sublist
    //in even nodes both sublist will be of equal lengths
    //in odd nodes second sublist will be shorter hence till it gets exhausted
    while(head2) { //head2!=NULL
        if(head->data!=head2->data) {
            return false;
        }

        head=head->next;
        head2=head2->next;
    }
    return true;
}

int main() {
    node* head=NULL; //initially linked list is empty

    
    insertAtHead(head,10);
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);

    printLinkedList(head);
    
    checkPalindrome(head) ? cout<< "linkedlist is palindrome"<<endl:
    cout<<"linkedlist not a palindrome"<<endl;

    return 0;
}






 