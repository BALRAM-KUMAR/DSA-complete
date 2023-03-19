Diameter of tree :- longest path between 2 node
                    path does not need to pass via root

approach1:- coding ninja brute force TC O(N) where we find both maximum left and right length and take max
approach2:- 
 TC=o(n) and sc=O(n) assuming auxialary stack space
 
int maxi;
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
     int fun(Node *root){
        if(root==NULL)
        {
            return 0;
        }
        int lh=fun(root->left);
        int rh=fun(root->right);
        maxi=max(maxi,lh+rh+1);
        return 1+max(lh,rh);
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
