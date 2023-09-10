#include <iostream>
#include<stack>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* build_tree(string s){ //build tree using pre order
    if (s == "true"){
        int d;
        cin >> d;
        node* root = new node(d);

        string l;
        cin >> l;
        if (l == "true"){
            root->left = build_tree(l);
        }

        string r;
        cin >> r;
        if (r == "true"){
            root->right = build_tree(r);
        }
        return root;
    }
    return NULL;
}



void print_nodes_without_sibling(node* root) {
    if (root == NULL) {
        return;
    }
    if (root->left != NULL && root->right == NULL) {
        cout << root->left->data << " ";
    }
    if (root->left == NULL && root->right != NULL) {
        cout << root->right->data << " ";
    }
    print_nodes_without_sibling(root->left);
    print_nodes_without_sibling(root->right);
}

int main() {
    node* root = build_tree("true");
    print_nodes_without_sibling(root);
    cout << endl;
    return 0;
}