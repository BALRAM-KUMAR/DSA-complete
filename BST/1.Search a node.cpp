p : search a node exist or not
  bool search(Node* root, int x) {
    // Your code here
    if(root==NULL){
        return 0;
    }
    if(root->data==x){
        return 1;
    }
    else if(root->data>x){
        return search(root->left,x);
    }
    else{
        return search(root->right,x);
    }
}

Tc=O(H)
Sc=O(1)
