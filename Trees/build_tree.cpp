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

void printLevelOrder(node* root) {
    queue<node*> q; //to keep track of nodes which have been visited but not yet processed

    q.push(root);
    q.push(NULL);
    
    while(!q.empty()) {
        node* front= q.front(); // make a front pointer
        q.pop();

        if(!front) {//front==NULL
            cout<<endl;
            if(!q.empty()) {
                q.push(NULL);
            }  
        }
        else{ //process the front node
            cout<< front->data << " ";
            if(front->left){
                q.push(front->left);
            }

            if(front->right) {
                q.push(front->right);
            }
        }
    }
}  

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

int main() {
    node* root=buildTree();
    printLevelOrder(root);
    return 0;
}




