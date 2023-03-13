int maxi;
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
     int fun(Node *root){
        if(root==NULL)
        {
            return 0;
        }
        int x=fun(root->left);
        int y=fun(root->right);
        maxi=max(maxi,x+y+1);
        return 1+max(x,y);
    }
    int diameter(Node* root) {
         if(root==NULL)
        {
            return 0;
        }
        maxi=INT_MIN;
        int x=fun(root);
        return maxi;
    }
};
