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

node* constructBST(node* root, int value) {
    if(root==NULL) {
        return new node(value);
    }

    if(value<root->data) {
        root->left=constructBST(root->left,value) ;
    }

    else{
        root->right=constructBST(root->right,value);
    }

    return root;
}

void kthLargestBST(node* root, int k, int& count, int& kthLargest){
    if(root==NULL || count>k) {
        return;
    }

    kthLargestBST(root->right,k,count, kthLargest);

    count++;
    if(count==k) {
        kthLargest=root->data;
        return;
    }

    kthLargestBST(root->left,k,count, kthLargest);

}

int findKthLargest(node* root, int k) {
    int count = 0;
    int kthLargest = -1;

    kthLargestBST(root, k, count, kthLargest);
    return kthLargest;
}

int main() {
    int n;
    cin >> n;

    node* root = NULL;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        root = constructBST(root, value);
    }

    int k;
    cin>>k;

    int ans=findKthLargest(root,k);

    cout<<ans;
    return 0;
}