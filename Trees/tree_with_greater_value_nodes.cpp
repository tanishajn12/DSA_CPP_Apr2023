#include<iostream>
#include<vector>
#include <sstream>
#include <stack>
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

// node* insertNode(node* root, int data) {
//     if(root==NULL) {
//         return NULL;
//     }

//     if (data < root->data) {
//         root->left = insertNode(root->left, data);
//     } 
    
//     else {
//         root->right = insertNode(root->right, data);
//     }

//     return root;
// }

node* buildBST(string& input) {
    stringstream ss(input);
    string token;
    stack<node*> st;

    node* root=NULL;

    while(getline(ss,token,' ')) {
        int value=stoi(token);
        node* newNode=new node(value);

        if(st.empty()) {
            root=newNode;
        }

        else{
            if (value < st.top()->data) {
                st.top()->left = newNode;
            }

            else{
                node* parent=NULL;
                while(!st.empty() && value> st.top()->data) {
                    parent=st.top();
                    st.pop();
                }
                parent->right=newNode;
            
            }
        }
        st.push(newNode);
    }
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

void printPreOrder(node* root) {
    if(root==NULL) {
        return;
    }

    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

int main() {
    string input;
    getline(cin,input,'\n');

    node* root=buildBST(input);

    int sum=0;
    root=replaceWithGreaterSum(root,sum);

    display(root);
    printPreOrder(root);

    return 0;
}


