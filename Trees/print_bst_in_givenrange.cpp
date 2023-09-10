#include<iostream>
#include<vector>
#include<algorithm>
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

// node* constructBST(vector<int>& nums, int start, int end) {
//     if(start>end) {
//         return NULL;
//     }

//     int mid=(start + end)/2;

//     node* root=new node(nums[mid]);

//     root->left=constructBST(nums, start,mid-1);
//     root->right=constructBST(nums,mid+1,end);

//     return root;
// }


void insert(node* &root, int value) {
    if (root == NULL) {
        root = new node(value);
        return;
    }

    if (value < root->data) {
        if (root->left == NULL) {
            root->left = new node(value);
        } 
        
        else {
            insert(root->left, value);
        }
    } 
    
    else {
        if (root->right == NULL) {
            root->right = new node(value);
        } 
        
        else {
            insert(root->right, value);
        }
    }
}

node* constructBST(vector<int>& nums, int n) {
    node* root = NULL;
    for (int i = 0; i < n; i++) {
        insert(root, nums[i]);
    }

    return root;
}



void preorderTraversal(node* root) {
    if (root ==NULL) {
        return;
    }
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}


void printNodesInRange(node* root, int k1, int k2) {
    if (root == NULL) {
        return;
    }

    if (root->data > k1) {
        printNodesInRange(root->left, k1, k2);
    }

    if (root->data >= k1 && root->data <= k2) {
        cout << root->data << " ";
    }

    if (root->data < k2) {
        printNodesInRange(root->right, k1, k2);
    }
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        vector<int> nums(n);
        
        for(int j=0; j<n; j++) {
            cin>>nums[j];
        }

        // sort(nums.begin(),nums.end());

        int k1,k2;
        cin>>k1>>k2;

        node* root=constructBST(nums,n);

        cout<<"# Preorder : ";
        preorderTraversal(root);
        cout<<endl;

        cout << "# Nodes within range are : ";
        printNodesInRange(root, k1, k2);
        cout << endl;
    }
    return 0;
}
