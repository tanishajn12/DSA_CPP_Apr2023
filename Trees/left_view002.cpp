#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    node* left;
    node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// function to build a binary tree from its level order traversal
Node* buildTree(vector<int> levelOrder) {
    if(levelOrder.size() == 0) return NULL;
    
    Node* root =Node(levelOrder[0]);
    queue<Node*> q;
    q.push(root);
    
    int i = 1;
    while(!q.empty() && i < levelOrder.size()) {
        Node* parent = q.front();
        q.pop();
        
        int left = levelOrder[i++];
        if(left != -1) {
            parent->left =Node(left);
            q.push(parent->left);
        }
        
        if(i < levelOrder.size()) {
            int right = levelOrder[i++];
            if(right != -1) {
                parent->right =Node(right);
                q.push(parent->right);
            }
        }
    }
    
    return root;
}

int main() {
    vector<int> levelOrder = {1, 2, 3, 4, 5, -1, 6, -1, -1, -1, -1, -1, -1};
    
    Node* root = buildTree(levelOrder);
    
    cout<<"Level order traversal of binary tree: ";

    return 0;
}