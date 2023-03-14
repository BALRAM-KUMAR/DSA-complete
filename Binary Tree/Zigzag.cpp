code library

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
