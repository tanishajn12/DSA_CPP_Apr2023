#include<iostream>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

        node(int data) {
            this->data=data;
            this->left=this->right=NULL;
        }
};

node* constructBST(node* root, int value) {
    if(root==NULL) {
        return new node(value);
    }

    if(value<root->data) {
        root->left=constructBST(root->left,value) ;
    }

    else{
        root->right=constructBST(root->right,value);
    }

    return root;
}

node* insertDuplicateNode(node* root) {
    if(root==NULL) {
        return NULL;
    }

    node* newNode= new node(root->data) ;
    newNode->left=root->left;
    root->left=newNode;

    insertDuplicateNode(newNode->left);
    insertDuplicateNode(root->right);

    return root;
}

void display(node* root) {
    if (root == NULL) {
        return;
    }

    if(root->left) {
        cout<<root->left->data;
    } else{
        cout<<"END";
    }

    cout<< " => " <<root->data << " <= ";

    if(root->right) {
        cout<<root->right->data;
    } else{
        cout<<"END";
    }
    cout<<endl;

    display(root->left);
    display(root->right);
}

int main() {
    int n;
    cin >> n;

    node* root = NULL;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        root = constructBST(root, value);
    }

    root = insertDuplicateNode(root);

    display(root);

    return 0;
}

