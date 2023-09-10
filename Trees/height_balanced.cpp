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


class Pair {
    public:
    bool isBalanced;
    int height;
};

Pair checkHeightBalancedEfficient(node* root) {
    Pair p;
    //base case
    if(!root) {
        //tree is empty
        p.isBalanced= true;
        p.height=-1;
        return p;
    }
    //recursive case
    //1. check if the left subTree is height balanced and simultaneoulsy compute the height of left subTree
    Pair pL = checkHeightBalancedEfficient(root->left);

    //2. check if the right subTree is height balanced and simultaneoulsy compute the height of right subTree
    Pair pR= checkHeightBalancedEfficient(root->right);

    //3. check if the root node is height balanced or not
    bool Z= abs(pL.height - pR.height)<=1 ? true : false;

    p.isBalanced = pL.isBalanced && pR.isBalanced && Z;
    p.height= 1 + max(pL.height, pR.height);
    return p;
}

int main() {
    node* root=buildTree();
    Pair p=checkHeightBalancedEfficient(root);
    p.isBalanced? cout<<"height-balanced!"<<endl:
    cout<<"not height-balanced" <<endl;
    return 0;
}







