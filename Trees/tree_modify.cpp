#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int val) {
        value = val;
        left = NULL;
        right = NULL;
    }
};

Node* buildBST(vector<int>& preorder, int& idx, int minValue, int maxValue) {
    if (idx >= preorder.size()){
        return NULL;
    }

    int val = preorder[idx];
    if (val < minValue || val > maxValue){
        return NULL;
    }

    Node* node = new Node(val);
    idx++;

    node->left = buildBST(preorder, idx, minValue, val - 1);
    node->right = buildBST(preorder, idx, val + 1, maxValue);

    return node;
}

Node* buildBSTFromPreorder(const string& preorderInput) {
    stringstream ss(preorderInput);
    int val;
    vector<int> preorder;

    while (ss >> val) {
        preorder.push_back(val);
    }

    int idx = 0;
    return buildBST(preorder, idx, INT16_MIN, INT16_MAX);
}

void inorderTraversal(Node* node) {
    if (node == nullptr) {
        return;
    }

    inorderTraversal(node->left);
    cout << node->value << " ";
    inorderTraversal(node->right);
}

int main() {
    string preorderInput;
    cout << "Enter preorder input: ";
    getline(cin, preorderInput);

    Node* root = buildBSTFromPreorder(preorderInput);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}