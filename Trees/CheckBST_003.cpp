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

bool checkBST(TreeNode* root, long long lb, long long ub) {
    //base case
    if(!root) {
        //empty tree is a BST
        return true;
    }
    
    return root->val>lb && root->val< ub && 
    checkBST(root->left, lb, root->val)&&
    checkBST(root->right, root->val, ub);

}

int main() {
	TreeNode* root = new TreeNode(10);

	root->left = new TreeNode(5);
	root->left->left  = new TreeNode(3);
	root->left->right = new TreeNode(7);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(17);

    // int lb=INT_MIN;
    // int ub=INT_MAX;

    long long lb=(long long)INT_MIN-1;
    long long ub=(long long)INT_MAX+1;

    checkBST(root,lb,ub) ? cout << "true" << endl :
	cout << "false" << endl;

	return 0;
}







