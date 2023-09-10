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

int computeHeight(node* root) {
    //base case
    if(!root) {
        //tree is empty
        return -1;
    }

    //recursive
    //1.compute the height of left subTree -> friend
    int X=computeHeight(root->left);

    //2.compute the height of right subTree -> friend
    int Y=computeHeight(root->right);

    return 1 + max(X,Y);
}

int main() {
    node* root=buildTree();

    cout<< computeHeight(root)<<endl;

    return 0;
}





