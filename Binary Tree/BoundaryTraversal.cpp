class Solution {
public:
    bool isleaf(Node *root){
        if(root->left==NULL and root->right==NULL ) return true;
        else return false;
    }
  void addleftboundary(Node *root,vector<int> &ans){
     Node *curr=root->left;
      while(curr){
          if(!isleaf(curr)) ans.push_back(curr->data);
          if(curr->left) curr=curr->left;
          else curr=curr->right;
      }
  }
  
  void addrightboundary(Node *root,vector<int> &ans){
      Node *curr=root->right;
      vector<int> temp;
      while(curr){
          if(!isleaf(curr)) temp.push_back(curr->data);
          if(curr->right) curr=curr->right;
          else curr=curr->left;
      }
      for(int i=temp.size()-1;i>=0;i--){
          ans.push_back(temp[i]);
      }
  }
  
  void addleaves(Node *root,vector<int> &ans){
      if(isleaf(root)){
          ans.push_back(root->data);
          return;
      }
      if(root->left) addleaves(root->left,ans);
      if(root->right) addleaves(root->right,ans);
      
  }

    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root==NULL) return ans;
        if(!isleaf(root)) ans.push_back(root->data);
        addleftboundary(root,ans);
        addleaves(root,ans);
        addrightboundary(root,ans);
    }
};
