#include<bits/stdc++.h>
using namespace std;

// structure for a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// function to insert a new node in the binary tree
Node* insertNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// function to print left view of binary tree
void leftView(Node* root) {
    if(root == NULL) {
        return;
    }
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()) {

        int n = q.size();

        for(int i=1; i<=n; i++) {
            Node* temp = q.front();
            q.pop();

            if(i == 1) {
                cout<<temp->data<<" ";
            }

            if(temp->left != NULL){
                q.push(temp->left);
            } 
            if(temp->right != NULL){
                q.push(temp->right);
            } 
        }
    }
}

// function to build a binary tree from its level order traversal
Node* buildTree(vector<int> levelOrder) {
    if(levelOrder.size() == 0) return NULL;
    
    Node* root = insertNode(levelOrder[0]);
    queue<Node*> q;
    q.push(root);
    
    int i = 1;
    while(!q.empty() && i < levelOrder.size()) {
        Node* parent = q.front();
        q.pop();
        
        int left = levelOrder[i++];
        if(left != -1) {
            parent->left = insertNode(left);
            q.push(parent->left);
        }
        
        if(i < levelOrder.size()) {
            int right = levelOrder[i++];
            if(right != -1) {
                parent->right = insertNode(right);
                q.push(parent->right);
            }
        }
    }
    
    return root;
}

// function to do a level order traversal of the binary tree
void levelOrderTraversal(Node* root) {
    if(root == NULL) return;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()) {
        Node* node = q.front();
        q.pop();
        
        cout<<node->data<<" ";
        if(node->left != NULL) q.push(node->left);
        if(node->right != NULL) q.push(node->right);
    }
}

// driver code
int main() {
    vector<int> levelOrder = {1, 2, 3, 4, 5, -1, 6, -1, -1, -1, -1, -1, -1};
    
    Node* root = buildTree(levelOrder);

    cout<<"Left view of binary tree: ";
    leftView(root);
    
    return 0;
}
