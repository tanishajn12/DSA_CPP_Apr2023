#include <iostream>
#include <climits>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int val) {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

bool isBST(Node* root, int minVal, int maxVal) {
    if (root == NULL) {
        return true;
    }

    if (root->value < minVal || root->value > maxVal) {
        return false;
    }

    return isBST(root->left, minVal, root->value-1) &&
    isBST(root->right, root->value + 1, maxVal);
}

Node* buildTree(int* preorder, int* inorder, int start, int end, int& preIndex) {
    if (start > end) {
        return NULL;
    }

    Node* root = new Node(preorder[preIndex]);
    preIndex++;

    int inIndex;
    for (int i = start; i <= end; i++) {
        if (inorder[i] == root->value) {
            inIndex = i;
            break;
        }
    }

    root->left = buildTree(preorder, inorder, start, inIndex - 1, preIndex);
    root->right = buildTree(preorder, inorder, inIndex + 1, end, preIndex);

    return root;
    
}

int largestBSTSize(Node* root) {
    if (root == NULL) {
        return 0;
    }

    if (root->left == NULL && root->right == NULL) {
        return 1;
    }

    int leftSize = largestBSTSize(root->left);
    int rightSize = largestBSTSize(root->right);

    if (isBST(root, INT_MIN, INT_MAX)) {
        return leftSize + rightSize + 1;
    } 
    
    else {
        return max(leftSize, rightSize);
    }
}

int main() {
    int n;
    cin >> n;

    int* preorder = new int[n];
    int* inorder = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> preorder[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> inorder[i];
    }

    int preIndex = 0;
    Node* root = buildTree(preorder, inorder, 0, n - 1, preIndex);

    cout <<largestBSTSize(root) << endl;

    return 0;
}

