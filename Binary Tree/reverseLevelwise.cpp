Approach :- 
 
sc=tc=O(N)

vector<int> reverseLevelOrder(Node *root)
{
     vector<int> output;
    queue<Node *>pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){
        Node *front=pendingnodes.front();
        output.push_back(front->data);
        pendingnodes.pop();
        if(front->right){
            pendingnodes.push(front->right);
        }
        if(front->left){
            pendingnodes.push(front->left);
        }
        
    }
    reverse(output.begin(),output.end());
    return output;
}
