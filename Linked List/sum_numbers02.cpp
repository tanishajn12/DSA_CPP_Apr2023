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

ListNode* sumOfLinkedList(ListNode* head1, ListNode* head2) {
    ListNode* head=NULL;
    int carry=0;

    while(head1 and head2) {//head1!=NULL and head2!=NULL
        int d1=head1->data;
        int d2=head2->data;

        int sum=d1+d2+carry;

        ListNode* n=new ListNode(sum%10);
        carry=sum/10;
        n->next=head;
        head=n;

        head1=head1->next;
        head2=head2->next;

    }

    while(head1) {
        int d1=head1->data;

        int sum=d1+carry;

        ListNode* n=new ListNode(sum%10);
        carry=sum/10;
        n->next=head;
        head=n;

        head1=head1->next;
    }

    while(head2) {
        int d2=head2->data;
        int sum=d2+carry;

        ListNode* n=new ListNode(sum%10);
        carry=sum/10;
        n->next=head;
        head=n;

        head2=head2->next;
    }

    if(carry){
        ListNode* n=new ListNode(carry);
        n->next=head;
        head=n;
    }
    return head;
}

int main() {
	ListNode* head1 = NULL; // initially, linkedList empty
    int m,n;
    cin>>m>>n;
    for(int i=0; i<m; i++) {
        int x;
        cin>>x;
        insertAtHead(head1,x);
    }

    ListNode* head2 = NULL;
    for(int i=0; i<n; i++) {
        int y;
        cin>>y;
        insertAtHead(head2,y);
    }

	ListNode* head= sumOfLinkedList(head1,head2) ;
    printLinkedList(head);
	return 0;
}

