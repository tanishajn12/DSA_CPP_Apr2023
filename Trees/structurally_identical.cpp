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

node* build_tree(string s) {
    if(s=="true") {
        int d;
        cin>>d;

        node* root=new node(d);

        string l;
        cin>>l;
        if(l=="true") {
            root->left=build_tree(l);
        }

        string r;
        cin>>r;
        if(r=="true") {
            root->left=build_tree(r);
        }
        return root;
    }
    return NULL;
}



bool is_identical(node* tree1, node* tree2) {
    if(tree1==NULL && tree2==NULL) {
        return true;
    }

    if(tree1==NULL || tree2==NULL) {
        return false;
    }

    if(tree1->data!= tree2->data) {
        return false;
    }

    bool left_identical=is_identical(tree1->left,tree2->left);
    bool right_identical=is_identical(tree1->right,tree2->right);

    return left_identical && right_identical;
}

int main() {
    node* tree1=build_tree("true");
    node* tree2=build_tree("true");

    if(is_identical(tree1,tree2)) {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false";
    }

    return 0;
}
