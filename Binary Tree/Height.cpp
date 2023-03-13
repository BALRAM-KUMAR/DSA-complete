
O(n) time and O(n) space if you consider recursion stack otherwise O(1)
int height(struct Node* node){
        if(node==NULL){
            return 0;
        }
        int ans1=1;
        int ans2=1;
        ans1+=height(node->left);
        ans2+=height(node->right);
        return max(ans1,ans2);
    }


other syntax:


int height(struct Node* node){
        if(node==NULL){
            return 0;
        }
        
        int ans1=height(node->left);
        int ans2=height(node->right);
        return (max(ans1,ans2)+1);
    }
