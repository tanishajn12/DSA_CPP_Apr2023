#include<iostream>
#include<climits>
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

int findMaximum(TreeNode* root) {
    //base case
    if(!root) {
        return INT_MIN;
    }

    //recursive case
    while(root->right) {
        root=root->right;
    }
    return root->val;
}

int findMinimum(TreeNode* root) {
    //base case
    if(!root) {
        return INT_MAX;
    }

    //recursive case
    while(root->left) {
        root=root->left;
    }
    return root->val;
}

bool checkBST(TreeNode* root) {
    //base case
    if(!root){
        //tree is empty
        return true; //empty tree is a BST
    }

    //recursive case
    //1. check if the LST is a BST- > Friend
    bool X= checkBST(root->left);

    //2. Check if the RST is a BST -> Friend
    bool Y=checkBST(root->right);

    //3. Check if the BST property is satisfies at root node
    bool Z= root->val > findMaximum(root->left) && 
    root->val < findMinimum(root->right) ? true: false;

    return X && Y && Z;
}


int main() {

	TreeNode* root = new TreeNode(10);

	root->left = new TreeNode(5);
	root->left->left  = new TreeNode(3);
	root->left->right = new TreeNode(7);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(17);

	checkBST(root) ? cout << "true" << endl :
	cout << "false" << endl;

	return 0;
}


