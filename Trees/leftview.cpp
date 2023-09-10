#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

        node(int data) {
            this->data= data;
            this->left=NULL;
            this->right = NULL;
        }
};

node* buildTree() {
    queue<node*> q; //to keep track of nodes which have been contructed bt 
                    //whose child nodes are yet to be built
    
    int rootData;
    cin>> rootData;

    node* root=new node(rootData);
    q.push(root);

    while(!q.empty()){
        node* front=q.front();
        q.pop();

        int leftData;
        cin>>leftData;
        if(leftData!=-1) {
            node* leftchild=new node(leftData);
            front->left=leftchild;
            q.push(leftchild);
        }

        int rightData;
        cin>>rightData;

        if(rightData!=-1) {
            node* rightchild=new node(rightData);
            front->right=rightchild;
            q.push(rightchild);
        }

    }
    return root;
}

int maxLevel=0;

void printLeftView(node* root, int level) {
    if(root==NULL) {
        return;
    }
    
    if(maxLevel<level) {
        cout<<root->data<<" ";
        maxLevel++;
    }

    printLeftView(root->left,level+1);
    printLeftView(root->right,level+1);
}

int main() {
    node* root=buildTree();

    printLeftView(root,1);

    return 0;
}




