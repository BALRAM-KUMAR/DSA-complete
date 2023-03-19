concept:- A tree is height balanced if difference between heights of left 
           and right subtrees is not more than one for all nodes of tree.
           
example:- Input:
       10                                                   
     /   \
    20   30 
  /   \
 40   60
Output: 1
Explanation: The max difference in height
of left subtree and right subtree is 1.
Hence balanced. 
 
 Input:
      1
    /
   2
    \
     3 
Output: 0
Explanation: The max difference in height
of left subtree and right subtree is 2,
which is greater than 1. Hence unbalanced
Expected time complexity: O(N)
Expected auxiliary space: O(h) , where h = height of tree

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int f=1;
    int funct(Node *root){
       if(root==NULL)
        {
            return 0;
        }
        int l=funct(root->left);
        int r=funct(root->right);
        if(abs(l-r)>1)
        {
           return f=0;
        }
        return 1+max(l,r);
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        
        f=1;
        funct(root);
       return f;
         
    }
};
