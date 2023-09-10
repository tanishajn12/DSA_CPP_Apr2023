#include<iostream>
#include<queue>
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

    cout<<root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printInOrder(node* root) {
    //base case
    if(root==NULL) { //!root
        return;
    }
    
    printInOrder(root->left);
    cout<<root->data << " ";
    printInOrder(root->right);
}

int i=0; //to iterate over the pre order traversal

node* buildTree(int* pre, int* in, int s, int e) {
    //base case
    if(s>e) {
        //in order traversal is empty -> therefore corresponding tree is empty
        return NULL;
    }

    //recursive case
    int x=pre[i];
    i++;

    node* root=new node(x);
    int k=s;

    while(in[k]!=x) {
        k++;
    }

    //1. recursively build the left subtree using its inOrder traversal
    root->left=buildTree(pre, in, s,k-1);

    //2. recursively build the right subtree using its inOrder traversal
    root->right=buildTree(pre,in,k+1,e);

    return root;
}

int main() {
    int pre[]={10,20,40,50 70,30,60};
    int in[]={40,20,70,50,10,30,60};
    int n=sizeof(in)/sizeof(int);

    node* root=buildTree(pre,in,0,n-1);

    printPreOrder(root);
    cout<<endl;

    printInOrder(root);
    cout << endl;
    return 0;
}





