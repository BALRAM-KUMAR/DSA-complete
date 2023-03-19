TC = o(n)
SC = O(N)

approach: inorder

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void func(Node* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        func(root->left,ans);
       ans.push_back(root->data);
       func(root->right,ans);
    }
    vector<int> inOrder(Node* root) {
       vector<int> ans;
       func(root,ans);
       return ans;
    }
};



approach:- postorder

void func(Node* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        func(root->left,ans);
       func(root->right,ans);
       ans.push_back(root->data);
    }
vector <int> postOrder(Node* root)
{
      vector<int> ans;
       func(root,ans);
       return ans;
}

approach:- preorder

void func(Node* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        ans.push_back(root->data);
        func(root->left,ans);
       func(root->right,ans);
       
    }
vector <int> preorder(Node* root)
{
      vector<int> ans;
       func(root,ans);
       return ans;
}
