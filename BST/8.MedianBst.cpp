Input:
       6
     /   \
   3      8   
 /  \    /  \
1    4  7    9
Output: 6
Explanation: Inorder of Given BST will be:
1, 3, 4, 6, 7, 8, 9. So, here median will 6.



void findInorder(Node *root, vector<float>&vect)
{
     if(!root)
        return;
    
    
    findInorder(root->left, vect);
    vect.push_back(root->data);
    findInorder(root->right, vect);
    
    
}

float findMedian(Node *root)
{
    vector<float>vect;
    findInorder(root,vect);
    
    if((vect.size() % 2) == 0)
    {
        return (vect[vect.size()/2]+vect[(vect.size()-1)/2])/2.0;
    }
    else
        return vect[vect.size()/2];
}

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).
