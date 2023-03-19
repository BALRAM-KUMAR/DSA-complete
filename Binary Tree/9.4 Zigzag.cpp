code library
Application of level order traversal


Example:
       7
     9    7
   8  5  6
 10 2
 
 level 1 store : 7      size 1
 level 2 store  : 9 7    size 2
 level 3 store  : 8 5 6  size 3
 level 4 store  : 10 2    size 2
class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> ans;
    	if(root==NULL) return ans;
    	queue<Node *> q;
    	q.push(root);
    	int f=1;
    	while(!q.empty()){
    	    int size=q.size();
    	    vector<int> temp;
    	    while(size--){
    	        Node *t=q.front();
    	        q.pop();
    	        temp.push_back(t->data);
    	        if(t->left){
    	            q.push(t->left);
    	        }
    	        if(t->right){
    	            q.push(t->right);
    	        }
    	    }
    	    if(f%2==0){
    	        reverse(temp.begin(),temp.end());
    	    }
    	    for(int i=0;i<temp.size();i++){
    	        ans.push_back(temp[i]);
    	    }
    	    f=!f;
    	}
      return ans;	
    }
};
