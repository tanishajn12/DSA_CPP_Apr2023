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

node* buildTree() {
    int data;
    cin>>data;

    if(data == -1) {
        return NULL;
    }

    //1. construct the root node from the 1st value
    node* root= new node(data);

    //2. build the left subTree from its pre order traversal
    root->left= buildTree();

    //3. build the rightSubTree from its preOrder traversal
    root->right= buildTree();

    return root;
}

void printPreOrder(node* root) {
    //base case
    if(root==NULL) { //!root
        cout<<"-1"<< " ";
        return;
    }
    //recursive case
    cout<<root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

node* mirrorTree(node* root) {
    //base case
    if(!root) {
        //tree is empty
        return root;
    }
    //recursive case
    //1.mirror the left subTree -> friend
    root->left=mirrorTree(root->left);

    //2. mirror the right subtree -> friend
    root->right=mirrorTree(root->right);

    //3. swap the lelfchild and the right child of the root node
    swap(root->left,root->right);

    return root;
}

int main() {
    node* root=buildTree();
    root= mirrorTree(root);
    printPreOrder(root);
    return 0;
}





