 approach :- 
   1. initilize maxi as global variable
   2. keep all node value with node
   3. and check all max node


int MaxOfNode(TreeNode<int> *root){
    if(root==NULL){
        return -1;
    }
     maxi=max(maxi,root->data);
      for (int i = 0; i < root->children.size(); i++) {
            MaxOfNode(root->children[i]);
            
      }
    return maxi;  
 }
