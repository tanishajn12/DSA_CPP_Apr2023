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

int computeSumOfNodes(node* root) {
    //base case
    if(!root) {
        //tree is empty
        return 0;
    }

    //recursive
    //1.compute the sum of left subtree -> friend
    int X=computeSumOfNodes(root->left);

    //2. compute the sum of right subtree-> friend
    int Y=computeSumOfNodes(root->right);

    return X+Y+root->data;
}

int main() {
    node* root=buildTree();

    cout<< computeSumOfNodes(root)<<endl;

    return 0;
}





