#include<iostream>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

        node(int data) {
            this->data= data;
            this->left=NULL;
            this->right = NULL;
        }
};

void printPreOrder(node* root) {
    //base case
    if(root==NULL) { //!root
        return;
    }
    //recursive case
    printPreOrder(root->left);
    cout<<root->data << " ";
    printPreOrder(root->right);
}

int main() {
    node* root=NULL;
    root= new node(10);  //root pointer storing address of 10
    root->left = new node(20);  //root left pointer storing address of node 20
    root->right = new node(30); //root right pointer pointing to node 30
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(60);
    root->left->right->left=new node(70);

    printPreOrder(root);
    return 0;
}


