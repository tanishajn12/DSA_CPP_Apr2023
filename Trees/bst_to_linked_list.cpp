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

void printLinkedList(TreeNode* head) {
	while(head != NULL) {
		cout << head->val<<" ";
		head = head->right;
        if(head) cout<<"-> ";
	}
	cout << endl;
}

class Pair {
    public:
        TreeNode* head;
        TreeNode* tail;
};

Pair transform(TreeNode* root) {
    Pair p;

    //base case
    if(root==NULL) {
        //BST is empty
        p.head=NULL;
        p.tail=NULL;
        return p;
    }

    //recurisve case
    //1. transform the leftSubTree into a sorted linked list -> friend
    Pair pL= transform(root->left);
    if(pL.head!=NULL) { 
        //dereferencing null pointer will raise error
        //Left subtree is non empty
        pL.tail->right=root;
        p.head=pL.head;
    } else{
        p.head=root;
    }

    //2. transform the rightSubTree into a sorted linked list -> friend
    Pair pR=transform(root->right);
    if(pR.head!=NULL) {
        //right subtree is non empty
        root->right=pR.head;
        p.tail=pR.tail;
    }else{
        p.tail=root;
    }

    return p;
}

int main() {

	TreeNode* root = new TreeNode(10);

	root->left = new TreeNode(5);
	root->left->left  = new TreeNode(3);
	root->left->right = new TreeNode(7);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(17);

    Pair p =transform(root);

    printLinkedList(p.head);

	return 0;
}


