#include<iostream>
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


TreeNode* findMaximum(TreeNode* root) { //root pointer is passed by value
	if(root == NULL) {
		// tree is empty
		return NULL;
	}

	while(root->right != NULL) {
		root = root->right;
	}
	return root;
}

int main() {
	TreeNode* root = new TreeNode(10);

	root->left = new TreeNode(5);
	root->left->left  = new TreeNode(3);
	root->left->right = new TreeNode(7);
	root->left->left->right = new TreeNode(4);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(17);

	TreeNode* maxTreeNode = findMaximum(root);

	maxTreeNode ? cout << "maximum val : " << maxTreeNode->val << endl :
	cout << "tree is empty!" << endl;

	return 0;
}

