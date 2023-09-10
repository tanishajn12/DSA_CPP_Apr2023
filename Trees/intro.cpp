

string tree2str(TreeNode* root) {
    //base case
    if(!root) {
        //root==NULL
        //tree is empty
        return "";
    }

    //recursive case
    //1.compute the string representation for the left subtree
    string leftRepr=tree2str(root->left);

    //2. compute the string representation for the right subtree
    string rightRepr=tree2str(root->right);

    if(leftRepr != "" and rightRepr!="") {
        return to_string(root->val) + "(" + leftRepr + ")(" + rightRepr + ")";
    }

    else{
        if(leftRepr!=""){
          return to_string(root->val) + "(" + leftRepr + ")";  
        }
        else if(rightRepr!="") {
           return to_string(root->val) + "()(" + rightRepr + ")"; 
        }
        else{
            to_string(root->val);
        }
    }
}

int main() {

}