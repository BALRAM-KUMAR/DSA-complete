int func(Node *node){
        if(node==NULL)return 0;
        int a=func(node->left);
        int b=func(node->right);
        int x=node->data;
        node->data=a+b;
        return a+b+x;
    }
    void toSumTree(Node *node)
    {
         func(node);
    }
