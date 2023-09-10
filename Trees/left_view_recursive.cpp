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

node* buildTree() {
    int data;
    cin>>data;

    if(data == -1) {
        return NULL;
    }

    // 1. construct the root node from the 1st value
    node* root= new node(data);

    // 2. build the left subTree from its pre order traversal
    root->left= buildTree();

    // 3. build the rightSubTree from its preOrder traversal
    root->right= buildTree();

    return root;
}

int maxLevel=-1; // to store the info about max level upto which we'hv 
//printed the rightmost node

void printRightViewRecursive(node* root,int level) {
    //base case
    if(root==NULL) { //!root
        return;
    }
    //recursive case
    //1. process the root node
    if(maxLevel<level){
        //root is the rightmost node of given level
        cout<<root->data << " ";
        maxLevel++;
    }


    //2. preOrder traversal of left SubTree
    printRightViewRecursive(root->left,level+1);

    //3. preOrder traversal of right SubTree
    printRightViewRecursive(root->right,level+1);
    
}

int main() {
    node* root=buildTree();

    printRightViewRecursive(root,0);
    //printPreOrder(root);
    return 0;
}





