
Recusive approach:- using inorder preorder and postorder
In rec appproach code is sorter and interviewer want sorter code always 
  Tc=O(n) and sc=O(H) i am not considering the data str vector for analysing space complexity
  so space complexity is hight of the tree
Approach is based on  preorder traversal (Root left and right)
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


Application of level order traversal
 vector<int> leftview(Node *root)
 {
   vector<int> ans;
   queue<Node *> q;
   if(root==NULL) return ans;
   q.push(root);
   while(!q.empty())
   {
     int sz=q.size();
     ans.push_back(q.front->data);
     while(sz--)
     {
       Node* t=q.front();
       q.pop();
       if(t->left) q.push(t->left)
       if(t->right) q.push(t->right)
      }
    }
   return ans;
 }
