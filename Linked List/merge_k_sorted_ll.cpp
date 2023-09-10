#include<iostream>
using namespace std;

class ListNode{
    public:
        int data;
        ListNode* next;

        ListNode(int data) {
            this->data=data;
            this->next=NULL;
        }
};

void insertAtHead(ListNode*& head, int data) {
    ListNode* n= new ListNode(data);
    n->next=head;
    head=n;
}

void printLinkedList(ListNode* head) {
    while(head!=NULL) {
        cout<<head->data <<" ";
        head=head->next;
    }

    cout<<endl;
}

ListNode* mergeLinkedList(ListNode* head1, ListNode* head2) {
    //base case
    if(!head1) {//head1==NULL
        return head2;
    }
 
    if(!head2) {//head2==NULL
        return head1;
    }

    //recursive case
    ListNode* head=NULL;

    if(head1->data<head2->data) {
        head= head1;
        ListNode* headFromMyFriend= mergeLinkedList(head1->next, head2);
        head->next=headFromMyFriend;
    }
    else{
        head=head2;
        ListNode* headFromMyFriend= mergeLinkedList(head1, head2->next);
        head->next=headFromMyFriend;
    }
    return head;
}

int main() {

	ListNode* head1 = NULL; // initially, linkedList empty

	insertAtHead(head1, 50);
	insertAtHead(head1, 30);
	insertAtHead(head1, 10);

	printLinkedList(head1);

    ListNode* head2 = NULL;
    insertAtHead(head2, 60);
	insertAtHead(head2, 40);
	insertAtHead(head2, 20);

    printLinkedList(head2);

	ListNode* head= mergeLinkedList(head1,head2) ;
    printLinkedList(head);

	return 0;
}

