
Recusive approach:-
  Tc=O(n) and sc=O(H) i am not considering the data str vector for analysing space complexity
  so space complexity is hight of the tree

void func(Node* root,int level ,vector<int> &ans){
        if(root==NULL){
            return;
        }
        if(ans.size()==level)
        ans.push_back(root->data);
        func(root->left,level+1,ans);
        func(root->right,level+1,ans);
       
    }
vector<int> leftView(Node *root)
{
   vector<int> ans;
       func(root,0,ans);
       return ans;
}