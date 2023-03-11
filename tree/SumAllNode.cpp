approach :- 
  1. in each recursive call we put root data with the respective node
  2. if we reach the leaf node we just add all node
  3. do till there is no chiledren exist

int totalSumOfNode(TreeNode<int> *root){
    if(root==NULL){
        return -1;
    }
      int ans=root->data; 
      for (int i = 0; i < root->children.size(); i++) {
         ans+= totalSumOfNode(root->children[i]);
      }
    return ans;  
 }
