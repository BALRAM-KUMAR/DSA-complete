method 1:-
  1. store the all inorder element in array
  2. perform binary search in arrays and find element
  TC=O(N)+O(logn)
  SC=O(N)
  
method 2:-
  1. perform inorder traversal
  2. while performing inorder traversal if first_val>given_val
                                            is my answer
                                            TC=o(N)
                                             sc=O(1)
 method 3:- 
   1.
   tc(h)
   sc(1)
  TreeNode *inorderSuccessor(TreeNode *root , TreeNode* p){
   TreeNode *successor=NULL;
   while(root!=NULL)
   {
     if(p->val>=root->val){
       root=root->right;
     }
     else{
       seccessor =root;
       root=root->left
       }
   }
   return successor;
 }
 };
