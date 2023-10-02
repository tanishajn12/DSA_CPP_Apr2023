#include<iostream>
using namespace std;

class ListNode{
    public:
        int val;
        ListNode *next;

        ListNode(int val) {
            this->val=val;
            this->next=NULL;
        }
};

class stack {
    ListNode *head;
    int count;

    public:
        forward_list() {
            head=NULL;
        }

        void push_front(int val) {
            if(head==NULL) {
                head=new ListNode(val);
                return;
            }
            ListNode *n= new ListNode(val);
            n->next=head;
            head=n;
        }

        void pop_front() {
            if(!head) {//head==NULL
                return ;
            }

            ListNode *temp=head;
            head=head->next;
            delete temp;
        }

        void display() {
            ListNode *n=head;
            while(n!=NULL) {
                cout<<n->val<<" ";
                n=n->next;
                
            }
            cout<<endl;
        }
        
        void reverse() {
            ListNode* prev=NULL;
            ListNode* cur=head;

            while(cur) {//cur!=NUll
                ListNode* temp=cur->next;
                cur->next=prev;
                prev=cur;
                cur=temp;   
            }

            head=prev;
        }
};

int main() {
    stack *s=new stack();

    s->push_front(50);
    s->push_front(40);
    s->push_front(30);
    s->push_front(20);
    s->push_front(10);

    s->display();

    s->reverse();

    s->display();
    return 0;
}


