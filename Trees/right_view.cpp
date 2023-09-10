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
    int data;
    cin>>data;

    if(data == -1) {
        return NULL;
    }

    // 1. construct the root node from the 1st value
    node* root= new node(data);

    // 2. build the left subTree from its pre order traversal
    root->left= buildTree();

    // 3. build the rightSubTree from its preOrder traversal
    root->right= buildTree();

    return root;
}

void printRightView(node* root) {
    queue<node*> q; //to keep track of nodes which have been visited but not yet processed

    q.push(root);
    q.push(NULL);
    
    while(!q.empty()) {
        node* front= q.front(); // make a front pointer
        q.pop();

        if(!front) {//front==NULL
            if(!q.empty()) {
                q.push(NULL);
            }  

        }

        else{ //front!=NULL
            if(q.front()==NULL){
                //front node is the rightmost node of given level
                cout<< front->data << " ";
            }
           
            if(front->left) { //front->left!=NULL
                q.push(front->left);

            }

            if(front->right) {//front->right!=NULL
                q.push(front->right);
            }
        }
    }
}  

int main() {
    node* root=buildTree();

    printRightView(root);
    return 0;
}




