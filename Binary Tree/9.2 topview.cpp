Approach:-
  O(n) ans O(N)

can we solve this problem using recusion ans is no bcs

concept used :- vertical line traversal
Ds used :- queue storing initial node and line and 
           another is map line and node (map store sorted fashion of key)

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
         vector<int> ans;
         map<int,int> mp;
         queue<pair<Node *,int>> q;
         q.push({root,0});
         while(q.size()!=0){
             auto it=q.front();
             q.pop();
             Node* node=it.first;
             int line=it.second;
             if(mp.find(line)==mp.end()){
                 mp[line]=node->data;
             }
             if(node->left){
                 q.push({node->left,line-1}) ;
             }
             if(node->right){
                 q.push({node->right,line+1}) ;
             }
         }
         for(auto it:mp){
         ans.push_back(it.second);
         }
         return ans;
    }

};
