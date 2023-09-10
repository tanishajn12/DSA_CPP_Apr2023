#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node(int data) {
        this->data=data;
        this->left=this->right=NULL;
    }
};

node* buildBST(string& preorder, int& index, int minValue, int maxValue) {
    if (index >= preorder.length()) {
        return NULL;
    }

    if (preorder[index] == '-') {
        index += 3;  // Skip '-1' and the space character
        return nullptr;
    }

    int value = 0;
    int i = index;

    // Extract the value from the preorder string
    while (i < preorder.length() && preorder[i] != ' ') {
        value = value * 10 + (preorder[i] - '0');
        i++;
    }

    // Check if the value is within the bounds
    if (value < minValue || value > maxValue) {
        return NULL;
    }

    // Create a new node with the extracted value
    node* root = new node(value);
    index = i + 1;

    // Recursively build the left and right subtrees
    root->left = buildBST(preorder, index, minValue, value);
    root->right = buildBST(preorder, index, value, maxValue);

    return root;
}


node* replaceWithGreaterSum(node* root, int& sum) {
    if(root==NULL) {
        return NULL ;
    }

    root->right=replaceWithGreaterSum(root->right,sum) ;

    sum+=root->data;
    root->data=sum;

        
    root->left=replaceWithGreaterSum(root->left, sum);

    return root;
}

void preorderTraversal(node* root) {
    if (root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void display(node* root) {
    if (root == NULL) {
        return;
    }

    if(root->left) {
        cout<<root->left->data;
    } else{
        cout<<"END";
    }

    cout<< " => " <<root->data << " <= ";
    if(root->right) {
        cout<<root->right->data;
    } else{
        cout<<"END";
    }
    cout<<endl;

    display(root->left);
    display(root->right);
}

int main() {
    string preorder;
    getline(cin,preorder);

    int index=0;
    node* root=buildBST(preorder,index,INT16_MIN,INT16_MAX);

    int sum=0;
    root=replaceWithGreaterSum(root,sum);
    cout<<endl;

    display(root);

    cout<<"PreOrder Traversal of Modified BST : "<<endl;
    preorderTraversal(root);
    return 0;
}


