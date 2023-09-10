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

class triple{
    public:
        bool isBST;
        int maxData;
        int minData;
};

triple checkBSTEfficient(TreeNode* root){
    triple t;
    //base case
    if(!root) {//root==NULL
        //tree is empty
        t.isBST= true;
        t.maxData=INT_MIN;
        t.minData=INT_MAX;

        return t;
    }

    //recursive case
    //1. recursively check if the leftSubTree is a BST & 
    //simultaneously compute its minimum and maximum value
    triple tL= checkBSTEfficient(root->left);

    //2. recursively check if the rightSubTree is a BST & 
    //simultaneously compute its minimum and maximum value
    triple tR= checkBSTEfficient(root->right);

    //3. Check if the BST property is satisfied at root node
    bool Z= root->val> tL.maxData && 
    root->val < tR.minData ? true: false;

    t.isBST= tL.isBST && tR.isBST && Z;
    t.maxData=max(tL.maxData, max(root->val, tR.maxData));
    t.minData=min(tL.minData, min(root->val, tR.minData));

    return t;
}

int main() {
	TreeNode* root = new TreeNode(10);

	root->left = new TreeNode(5);
	root->left->left  = new TreeNode(3);
	root->left->right = new TreeNode(7);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(17);

    triple t=checkBSTEfficient(root);
    t.isBST? cout << "true" << endl :
	cout << "false" << endl;

	return 0;
}





