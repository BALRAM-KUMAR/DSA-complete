class Solution{
  public:
    /*You are required to complete this method*/
    int ans;
    void func(Node *root,int h,int &ma){
        if(root==NULL) return;
        if(ans==0) return;
        if(!root->left and !root->right){
            if(ma==-1){
                ma=h;
            }
            else{
                if(h!=ma)
                ans=0;
            }
            return;
        }
        func(root->left,h+1,ma);
        func(root->right,h+1,ma);
    }
    bool check(Node *root)
    {
        int ma=-1;
        int h=0;
        ans=1;
        func(root,h,ma);
        return ans;
    }
};
