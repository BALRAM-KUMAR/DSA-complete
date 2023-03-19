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


Example:- 
Input:
             10
          /      \
        -2        6
       /   \     /  \
     8     -4   7    5

Output:
            20
          /    \
        4        12
       /  \     /  \
     0     0   0    0

Explanation:

           (4-2+12+6)
          /           \
      (8-4)          (7+5)
       /   \         /  \
      0     0       0    0
