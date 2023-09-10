#include <iostream>
#include <string>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

// Function to create a new node with the given data
Node* new_node(int data) {
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

Node* build(string s){
    if (s == "true"){
        int d;
        cin >> d;
        Node* root = new_node(d);

        string l;
        cin >> l;
        if (l == "true"){
            root->left = build(l);
        }

        string r;
        cin >> r;
        if (r == "true"){
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}



// Function to remove all the leaves from a binary tree
Node* remove_leaves(Node* root) {
    if (root == NULL) {
        return NULL;
    }

    if (root->left == NULL && root->right == NULL) {
        delete root;
        return NULL;
    }

    root->left = remove_leaves(root->left);
    root->right = remove_leaves(root->right);

    return root;
}

// Function to print the binary tree in pre-order traversal format
void pre_order_traversal(Node* root) {
    if (root == NULL) {
        return;
    }

    cout << (root->left ? to_string(root->left->data) + " => " : "END => ");
    cout << to_string(root->data) + " <= ";
    cout << (root->right ? to_string(root->right->data) : "END ");

    cout << endl;
    pre_order_traversal(root->left);
    pre_order_traversal(root->right);
}


int main() {
    Node* root = build("true");
    root = remove_leaves(root);
    pre_order_traversal(root);
    return 0;
}


