#include <iostream>
#include<stack>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* insertValue(node* root,int value, queue<node*> q) {
    if(value!=-1){
        node* temp=new node(value);
    }

    if(root==NULL) {
        root=temp;
    }
    
    else if(q.front()->left==NULL) {
        q.front()->left=temp;
    }

    else {
        q.front()->right=temp;
        q.pop();
    }

    q.push(temp);
    return root;
}

node* buildTree(int arr[], int n) {
    node* root=NULL;
    queue<node* > q;
    for(int i=0; i<n; i++) {
        root=insertValue(root,arr[i],q);
    }
}