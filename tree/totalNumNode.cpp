approach :-
   1. recursive call for going to leaf node 
   2. add 1 if we are starting to return
     do if there is no child present


int totalNode(TreeNode<int> *root){
    if(root==NULL){
        return -1;
    }
      int ans=1;
      for (int i = 0; i < root->children.size(); i++) {
          ans+=totalNode(root->children[i]);
      }
    return ans;  
 }
