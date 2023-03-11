#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template <typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T data){
        this->data=data;
    }
    //destructor
    ~TreeNode(){
        for(int i=0;i<root->children.size();i++)
        {
            delete children[i];
        }
};


void printTree(TreeNode<int> * root){
    cout<<root->data<<endl;
    for (int i = 0; i < root->children.size(); i++) {
        printTree(root->children[i]);
    }
}



void printTreeBetter(TreeNode<int> *root){
    if(root==NULL){        // generally trees has no base case
        return;           // this is edge case 
    }
   cout<<root->data<<" : ";
   for (int i = 0; i < root->children.size(); i++) {
       cout<<root->children[i]->data<<",";
   }
   cout<<endl;
   for (int i = 0; i < root->children.size(); i++) {
       printTreeBetter(root->children[i]);
   }
}

//It has done by with the help of queue




TreeNode<int> * takeinputLevel(){
    int rootData;
    cout<<"enter root data"<<" ";
    cin>>rootData;
    TreeNode<int> *root=new TreeNode<int>(rootData);
    queue<TreeNode<int>*> pendingNode;
    pendingNode.push(root);
    while(pendingNode.size()!=0){
        TreeNode<int> *front=pendingNode.front();
        pendingNode.pop();
        cout<<"enter the no of children of "<<front->data<<" ";
        int numchildren;
        cin>>numchildren;
        for (int i = 0; i < numchildren; i++) {
            int childData;
            cout<<"enter"<<i<<" th child of "<<front->data<<" ";
            cin>>childData;
            TreeNode<int> *child=new TreeNode<int> (childData);
            front->children.push_back(child);
            pendingNode.push(child);
        }
    }
    return root;
}
int main(){
//   TreeNode<int> * root=new TreeNode<int>(5);
//   TreeNode<int> * node1=new TreeNode<int>(6);
//   TreeNode<int> * node2=new TreeNode<int>(7);
//   root->children.push_back(node1);
//   root->children.push_back(node2);
//another method to take input level wise
   TreeNode<int> *root=takeinputLevel();
   printTree(root);
   cout<<endl;
   cout<<"root"<<" "<<"children"<<endl;
   printTreeBetter(root);
   delete root;
}
