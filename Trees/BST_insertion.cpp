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

void printLevelOrder(TreeNode* root) {
	queue<TreeNode*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()) {
		TreeNode* front = q.front(); q.pop();
		if(front == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}
		} else {
			cout << front->val << " ";
			if(front->left) q.push(front->left);
			if(front->right)q.push(front->right);
		}
	}

}

TreeNode* insert(TreeNode* root, int data) {
    //base case
    if(!root) {
        root=new TreeNode(data);
        return root;
    }

    if(data<root->val) {
        root->left=insert(root->left, data);
    } else{
        root->right=insert(root->right,data);
    }
    return root;
}

int height(TreeNode* root) {
	if(root==NULL){
		return 0;
	}

	else{
		//compute the height of each subtree
		int leftHeight=height(root->left);
		int rightHeight= height(root->right);

		//use the larger value
		if(leftHeight>rightHeight){
			return(leftHeight+1);
		}

		else{
			return(rightHeight+1);
		}
	}

}


//print nodes at a given level
void printLevelNodes(TreeNode* root, int level) {
	if(root==NULL){
		return;
	}

	if(level==1){
		cout<<" "<<root->val;
	}

	else if(level>1){
		printLevelNodes(root->left, level-1);
		printLevelNodes(root->right,level-1);
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

	printLevelOrder(root); 

	cout<<"Height of BST: "<<height(root)<<endl;
	cout<<"Node at level 2 :";
	printLevelNodes(root,2);
	return 0;
}

