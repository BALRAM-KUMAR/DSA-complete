
Approach:- 
  tc=o(n)=sc if we are not consider the other ds vector
template <typename T>
class BinaryTreeNode
{
    public:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
    BinaryTreeNode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
    
};
void printlevelwise(BinaryTreeNode<int> *root)
{
    cout<<root->data<<" ";
    queue<BinaryTreeNode<int>*>pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){
        BinaryTreeNode<int> *front=pendingnodes.front();
        pendingnodes.pop();
        if(front->left){
            cout<<front->left->data<<" ";
            pendingnodes.push(front->left);
        }
        if(front->right){
            cout<<front->right->data<<" ";
            pendingnodes.push(front->right);
        }
        
    }
}






other syntax:- 
  struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
vector<int> reverseLevelOrder(Node *root)
{
     vector<int> output;
    output.push_back(root->data);
    queue<Node *>pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){
        Node *front=pendingnodes.front();
        pendingnodes.pop();
        if(front->right){
            output.push_back(front->right->data);
            pendingnodes.push(front->right);
        }
        if(front->left){
            output.push_back(front->left->data);
            pendingnodes.push(front->left);
        }
        
    }
    reverse(output.begin(),output.end());
    return output;
}
