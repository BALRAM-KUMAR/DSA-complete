Input :
            8
         /     \
        3      10
      /   \      \
     1     6     14
         /   \   /
        4     7 13
Output : 8 10 14 3 6 7 13 1 4


Basic idea : right jate jao aur print krte jao jb tkk NULL nhi milta
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
Here N is number of nodes.


vector<int> diagonal(Node *root)
{
   vector<int> ans;
   queue<Node *> q;
   if(root==NULL)
   {
       return ans;
   }
   q.push(root);
   while(!q.empty()){
       Node * temp=q.front();
       q.pop();
       while(temp){
           if(temp->left){
             q.push(temp->left);
           }
           ans.push_back(temp->data);
           temp=temp->right;
       }
   }
   return ans;
}
