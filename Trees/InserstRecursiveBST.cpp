
TreeNode* insertRecursive(TreeNode* r, TreeNode* new_node){
    if(!r){
        r = new_node;
        return r;
    }
    if(new_node -> val < r -> val){
        r -> left = insertRecursive(r -> left, new_node);
    }else if(new_node -> val > r -> val){
        r -> right = insertRecursive(r -> right, new_node);
    }else{
        cout<<"Duplicate are not allowes"<<endl;
    }
    return r;
}