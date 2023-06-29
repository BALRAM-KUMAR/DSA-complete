Intuition
The intuition behind the approach is to construct a BST by recursively
dividing the sorted array into halves. The middle element of each subarray
is chosen as the root of the corresponding subtree, 
ensuring that the left subtree contains smaller elements and the right
subtree contains larger elements.

  class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
           return build(nums,0,nums.size()-1);
    }
     TreeNode* build(vector<int>& nums,int left, int right) {
            if(left>right)
            return NULL;
        int mid = (left+right)/2;
        TreeNode* NewNode = new TreeNode(nums[mid]);
        NewNode->left = build(nums,left,mid-1);
        NewNode->right = build(nums,mid+1,right);
        return NewNode;
    }
};

tc nd sc =O(N)
