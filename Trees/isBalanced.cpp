#include <iostream>
#include <queue>
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

class Pair {
    public:
    bool isBalanced;
    int height;
};

Pair checkHeightBalancedEfficient(node* root) {
    Pair p;
    //base case
    if(!root) {//tree is empty
        p.isBalanced= true;
        p.height=-1;
        return p;
    }
    //recursive case
    //1. check if the left subTree is height balanced and simultaneoulsy compute the height of left subTree
    Pair pL = checkHeightBalancedEfficient(root->left);

    //2. check if the right subTree is height balanced and simultaneoulsy compute the height of right subTree
    Pair pR= checkHeightBalancedEfficient(root->right);

    //3. check if the root node is height balanced or not
    bool Z= abs(pL.height - pR.height)<=1 ? true : false;

    p.isBalanced = pL.isBalanced && pR.isBalanced && Z;

    return p;
}

int main(){
    node* root = build("true");
    Pair p=checkHeightBalancedEfficient(root);

    p.isBalanced? cout<<"true"<<endl:
    cout<<"false" <<endl;
    return 0;
}


