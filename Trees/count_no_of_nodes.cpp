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

int computeNumOfNodes(node* root) {
    //base case
    if(!root) {
        //tree is empty
        return 0;
    }

    //recursive
    //1.count the num of nodes in the left subtree -> friend
    int X=computeNumOfNodes(root->left);

    //2. count the num of nodes in the right subtree-> friend
    int Y=computeNumOfNodes(root->right);

    return X+Y+1;
}

int main() {
    \

    node* root=buildTree(pre,in,0,n-1);

    printPre

    cout<< computeNumOfNodes(root)<<endl;

    return 0;
}





