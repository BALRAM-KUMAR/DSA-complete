point :- Dtrees can be traversed in multiple ways in 
        depth–first order (preorder, inorder, and postorder) 
         or breadth–first order (level order traversal).
  Algorithm:- iterative
  
 //preorder traversal
// Basic idea , we are using stack to perform this traversal
TC =O(N)
SC =O(N)
 vector<int> preorderTraversal(TreeNode * root)
  {
    vector<int> ans;
    if(root==NULL) return ans;
    
    stack<TreeNode*> st;
    st.push(root>
            while(!st.empty())
            {
              root=st.top();
              st.pop();
              ans.push_back(root->data);
              if(root->right!=NULL){
                st.push(root->left)
                }
              if(root->left!=NULL){
                st.push_back(root->left);
              }
            }
            return ans;
    }         
    
               
