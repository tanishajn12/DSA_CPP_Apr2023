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

void printInOrder(TreeNode* root) {
	if(root == NULL) {
		// root represents an empty tree
		return;
	}
	printInOrder(root->left);
	cout << root->val << " ";
	printInOrder(root->right);
}

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

TreeNode* findMaximum(TreeNode* root) { 
	if(root == NULL) {// tree is empty
		return NULL;
	}
	while(root->right != NULL) {
		root = root->right;
	}return root;
}

TreeNode* findMinimum(TreeNode* root) { 
	if(root == NULL) {// tree is empty
		return NULL;
	}
	while(root->left != NULL) {
		root = root->left;
	}
	return root;
}

TreeNode* erase(TreeNode* root, int key) {
    //base case
    if(!root) {//root==NULL
        return root;
    }

    //recursive case
    if(key<root->val) {
        //delete the node with given key , if present from the left subTree->friend
        root->left=erase(root->left,key);
    }

    else if(key>root->val) {
        //delete the node with given key , if present from the right subTree->friend
       root->right=erase(root->right, key);
    }

    else{
        //delete the root node
        if(!root->left and !root->right){ 
            //root->left==NULL and root->right==NULL
            //delete a leaf node
            delete root;
            root=NULL;

        }

        else if(!root->left and root->right) {
            //root->left==NULL and root->right!=NULL
            //delete a node with single right child
            TreeNode* temp=root->right;
            delete root;
            root=temp;
        }

        else if(root->left and !root->right) {
            //root->left!=NULL and root->right==NULL
            //delete a node with single right child
            TreeNode* temp=root->left;
            delete root;
            root=temp;
        }

        else{//root->left!=NULL and root->right!=NULL
            //delete a node with two child nodes
            // TreeNode* leftmax= findMaximum(root->left);
            // swap(root->val, leftmax->val);
            // root->left=erase(root->left,key);

            TreeNode* rightmin=findMinimum(root->right);
            swap(root->val, rightmin->val);
            root->right=erase(root->right,key);
        }
    }
    return root;
}

int main() {
	TreeNode* root = new TreeNode(10);

	root->left = new TreeNode(7);
	root->left->left  = new TreeNode(6);
	root->left->right = new TreeNode(9);
    // root->left->right->left=new TreeNode(6);
    // root->left->right->right=new TreeNode(9);


	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(17);

	printInOrder(root);
    cout<<endl;

    printLevelOrder(root);
    cout<<endl;

    int key;
    cin>>key;

    root=erase(root, key);

    printInOrder(root);
    cout<<endl;

    printLevelOrder(root);
    cout<<endl;

	return 0;
}

