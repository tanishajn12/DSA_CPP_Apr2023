#include <iostream>
#include<stack>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* build(string s){
    if (s == "true"){
        int d;
        cin >> d;
        node* root = new node(d);

        string l;
        cin >> l;
        if (l == "true"){
            root->left = build(l);
        }

        string r;
        cin >> r;
        if (r == "true"){
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}

void printZigZagLevelOrder(node* root) {
    if(!root) {
        return;
    }

    stack<node*> currentlevel;
    stack<node*> nextlevel;

    currentlevel.push(root);
    
    bool lefttoright=true;
    while(!currentlevel.empty()) {
        //pop out of stack
        node* temp=currentlevel.top();
        currentlevel.pop();

        if(temp!=NULL) {
            //print the data
            cout<<temp->data<<" ";
        

            if(lefttoright) {
                if (temp->left){
                    nextlevel.push(temp->left);
                }
                if (temp->right){
                    nextlevel.push(temp->right);
                }
            }

            else{
                if (temp->right){
                    nextlevel.push(temp->right);
                }
                if (temp->left){
                    nextlevel.push(temp->left);
                }
                
            }
        }

        if(currentlevel.empty()) { //current level is empty
            lefttoright=!lefttoright;
            swap(currentlevel,nextlevel);
        }
    }
}  

int main() {
    node* root=build("true");

    printZigZagLevelOrder(root);
    return 0;
}




