class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    void func(Node* &root,Node* &head,Node* &prev,int &f){
        if(root==NULL){
            return;
        }
        func(root->left,head,prev,f);
        if(f==0){
            f=1;
            head=root;
            prev=root;
        }
        else{
            prev->right=root;
            prev->right->left=prev;
            prev=prev->right;
        }
        func(root->right,head,prev,f);
    }
    Node * bToDLL(Node *root)
    {
        Node *head=NULL;
        Node *prev=NULL;
        int f=0;
        func(root,head,prev,f);
        return head;
    }
};
