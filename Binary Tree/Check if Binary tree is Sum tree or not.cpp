class Solution
{
    public:
    int f;
    int func(Node *node){
        if(node==NULL) return 0;
        if(!node->left and !node->right) return node->data;
        if(f==0) return 0;
        int a=func(node->left);
        int b=func(node->right);
        if(a+b!=node->data) f=0;
        return a+b+node->data;
    }
    bool isSumTree(Node* root)
    {
        f=1;
        func(root);
        return f;
    }
};
