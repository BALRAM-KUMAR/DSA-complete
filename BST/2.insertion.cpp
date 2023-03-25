
// Function to insert a node in a BST.
Node* insert(Node* root, int Key) {
    /*// Your code here
    if(root==NULL){
        return new Node(key);
    }
    if(root->data>key){
        root->left=insert(root->left,key);
    }
    else if(root->data<key){
        root->right=insert(root->right,key);
    }
    
    return root;*/
    
    
    Node *newNode = new Node(Key);
        Node *cur = root;
        Node *parent = NULL;
        while (cur != NULL){
            parent = cur;
            if (cur->data == Key) return root; //this line handles if K is already present in BST
            if (cur->data > Key)
                cur = cur->left;
            else
                cur = cur->right;
        }
        if (parent == NULL) {
            return newNode;
        }
        else if (parent->data < Key){
            parent->right = newNode;
        }else parent->left = newNode;
 
        return root;
    
}
//tc=O(h) and worst case=O(N)
//sc=O(h) and worst case=O(N)
//iterative time analysis
//tc=O(h=logn) and sc=O(1)
