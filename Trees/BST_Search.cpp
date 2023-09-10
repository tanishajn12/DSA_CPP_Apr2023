#include<iostream>
#include<queue>
using namespace std;

class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	}
};

TreeNode* insert(TreeNode* root, int data) {
    //base case
    if(!root) {
        //Tree is empty
        root=new TreeNode(data);
        return root;
    }

    //recursive case
    if(data<root->val) {
        //insert the node with data in left subtree(BST)->friend
        root->left=insert(root->left, data);
    } else{
        //insert the node with data in right subtree(BST)->friend
        root->right=insert(root->right,data);
    }

    return root;
}

bool search(TreeNode* root, int key) {
    //base case
    if(!root) {//root ==NULL
        //tree is empty
        return false;
    }

    //recursive case
    if(key==root->val) {//you've found the key in BST
        return true;
    }
    else if(key<root->val) { //search for the key in LST
        return search(root->left, key);

    }
    else{ //search for the key in the right subtree
        return search(root->right,key);
    }
}

int main() {
    TreeNode* root=NULL;
    root= insert(root,10);
    root= insert(root,5);
    root= insert(root,3);
    root= insert(root,7);
    root= insert(root,15);
    root= insert(root,13);
    root= insert(root,17);

    int n;
    cin>>n;

	search(root,n)? cout<<"true"<<endl :
    cout<<"false" <<endl;
    return 0;
}


