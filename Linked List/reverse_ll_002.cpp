#include <iostream>
using namespace std;
class listnode{
public:
    int val;
    listnode* next;
    
    listnode(int val)
    {
        this->val=val;
        this->next= NULL;
    }
    
};

void insertathead( listnode*&head,int val)
{
    listnode* n= new listnode(val);
    n->next=head;
    head=n;
    

}

listnode* gettail(listnode* head) {   
    if( head->next==NULL) return head;

    listnode* tail = head;

    while(tail->next!=NULL)
    {
        tail= tail->next;
    }
    return tail;
}

void insertattail(listnode*&head, int val) {   
    if(head== NULL) insertathead(head,val);

    else{ 
        listnode* n= new listnode(val);
        listnode* tail= gettail(head);
        tail->next=n;
        n->next= NULL;
    }
}

void print(listnode* head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}



listnode* ireversell(listnode* head)
{    
    listnode* curr= head;
    listnode* prev= NULL;

    while(curr!=NULL){ 
        listnode* temp= curr->next;
        curr->next= prev;
        prev=curr;
        curr=temp;
    }

    return prev;
}

int main() {

    listnode* head=NULL;

    int n,l,r;

    cin>>n;
    int k;

    for(int i=0; i<n;i++)
    {
        cin>>k;
        insertattail(head,k);
    }

    cin>>l>>r;

    int length=r-l+1;
        if(!head || head->next==NULL || length==1){
            cout<<head->val;
            return 0;
        }

        //finding node at left-1
        listnode* curr=head;
        for(int i=1;i<l-1;i++){
            if(curr)curr=curr->next;
            else break;
        }
        listnode* left_half=(l==1)?NULL:curr;
        curr=(l==1)?curr:curr->next;

        //finding node at right+1
        listnode* right_half=head;
        for(int i=1;i<=r;i++){
            if(right_half)right_half=right_half->next;
            else break;
        }
        listnode *prev=right_half;

        while(curr && length){
            listnode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            length--;
        }
        if(left_half==NULL){
            print(prev);
            return 0;
        }

        left_half->next=prev;

        print(head);


    return 0;
}
