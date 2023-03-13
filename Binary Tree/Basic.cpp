#include<iostream>
#include<queue>
using namespace std;
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


void print(BinaryTreeNode<int> *root){
    if(root==NULL){
        return;
    }
   /* cout<<root->data<<endl;
    print(root->left);         // this is not a good method to print
    print(root->right);
  */
  cout<<root->data<<" : ";
  if(root->left){
      cout<<"L"<<root->left->data;
  }
  if(root->right){
      cout<<"R"<<root->right->data;
  }
  cout<<endl;
  print(root->left);
  print(root->right);
}


//This is very painful way to take input
/*
BinaryTreeNode<int> *takeInput(){
    int rootdata;
    cout<<"enter data ";
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    BinaryTreeNode<int> *root= new BinaryTreeNode<int>(rootdata);
    BinaryTreeNode<int> *leftchild=takeInput();
    BinaryTreeNode<int> *rightchild=takeInput();
    root->left=leftchild;
    root->right=rightchild;
    return root;
}
*/
//Level wise take input using queue
BinaryTreeNode<int> * takeInputLevel(){
    int rootdata;
    cout<<"enter root data ";
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(rootdata);
    queue<BinaryTreeNode<int> *> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){
        BinaryTreeNode<int> *front=pendingnodes.front();
        pendingnodes.pop();
        cout<<"enter left child of "<<front->data<<" ";
        int leftchilddata;
        cin>>leftchilddata;
        if(leftchilddata!=-1){
            BinaryTreeNode<int> *child=new BinaryTreeNode<int>(leftchilddata);
            front->left=child;
            pendingnodes.push(child);
        }
        cout<<"enter right child of "<<front->data<<" ";
        int rightchilddata;
        cin>>rightchilddata;
        if(rightchilddata!=-1){
            BinaryTreeNode<int> *child=new BinaryTreeNode<int>(rightchilddata);
            front->right=child;
            pendingnodes.push(child);
        }
        
    }
    return root;
}


int main(){

/*
   BinaryTreeNode<int> *root=new BinaryTreeNode<int>(5);
   BinaryTreeNode<int> *node1=new BinaryTreeNode<int>(9);
   BinaryTreeNode<int> *node2=new BinaryTreeNode<int>(10);
   root->left=node1;
   root->right=node2;
*/
// BinaryTreeNode<int> *root=takeInput();
   BinaryTreeNode<int> *root=takeInputLevel();
   print(root);
   delete root;
   
}
