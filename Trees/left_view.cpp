#include <iostream>
#include <queue>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        
        Node(int data) {
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};

Node* build_tree() {
    queue<Node*> q;
    
    int data;
    cin >> data;
   
    if (data == -1) {
        return NULL;
    }
    
    Node* root = new Node(data);
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        
        cin >> data;
        if (data != -1) {
            Node* left_child = new Node(data);
            curr->left = left_child;
            q.push(left_child);
        }

        cin >> data;
        if (data != -1) {
            Node* right_child = new Node(data);
            curr->right = right_child;
            q.push(right_child);
        }
    }
    return root;
}

void print_leaves(Node* root) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        cout << root->data << " ";
        return;
    }
    print_leaves(root->left);
    print_leaves(root->right);
}

int main() {
    Node* root = build_tree();
    print_leaves(root);
    cout << endl;
    return 0;
}
