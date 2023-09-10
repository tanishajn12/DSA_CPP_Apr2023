#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this->data = data;
        this->left=NULL;
        this->right=NULL;
    }
};


Node* build_tree(int* post, int* in, int s,int e,int a){
    if (s>e) {
        //inorder traversal is empty -> therefore tree is empty
        return NULL;
    }

    int x=post[a];
    a--;
    Node* node = new Node(x);

    int inorder_index = 0;
    for (int j =s; j <= e; j++) {
        if (in[j] == node->data) {
            inorder_index = j;
            break;
        }
    }

    // 1. recursively build the leftSubtree using its inOrder traveral i.e. in[s...k-1]
    node->left = build_tree(post,in,s,inorder_index-1,a);

    // 2. recursively build the rightSubtree using its inOrder traversal i.e. in[k+1...e]
    node->right = build_tree(post,in,inorder_index+1,e,a);

    return node;
}

void printPostOrder(Node* root) {
	if(root == NULL) {
		// root represents an empty tree
		return;
	}
	
	printPostOrder(root->left);
	printPostOrder(root->right);
    cout << root->data << " ";
}


void printInOrder(Node* root) {
	if(root == NULL) {
		// root represents an empty tree
		return;
	}
	printInOrder(root->left);
	cout << root->data << " ";
	printInOrder(root->right);
}


void display(Node* root) {
    if (root == NULL) {
        return;
    }

    if (root->left) {
        cout << root->left->data;
    } 
    else {
        cout << "END";
    }

    cout << " => " << root->data << " <= ";

    if (root->right) {
        cout << root->right->data;
    } 
    
    else {
        cout << "END";
    }
    cout << endl;

    display(root->left);
    display(root->right);
}

int main() {
    int n;
    cin >> n;

    int post[n], in[n];
    for (int i = 0; i < n; i++) {
        cin >> post[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> in[i];
    }

    Node* root = build_tree(post,in,0,n-1,n-1);
    display(root);

    printPostOrder(root); 
	cout << endl;

	printInOrder(root); 
	cout << endl;

    return 0;
}
