#include<iostream>
using namespace std;

bool findMinimum(int pre,int n,TreeNode* root) {
    //base case
    if(!root) {
        //root==NuLL,tree is empty
        return false;
    }

    //recursive case
    
}

int main() {
    int pre=[10,5,3,7,15,13,17]
    int n=sizeof(pre)/sizeof(int);

    cout<<findMinimum(pre,n)<<endl;

    return 0;
}