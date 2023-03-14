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
