Input:
         5
       /   \
      1     1
     /       \
    2         2
Output: True
Explanation: Tree is mirror image of
itself i.e. tree is symmetric



bool isSymmetricUtil(node * root1, node * root2) {
  if (root1 == NULL || root2 == NULL)
    return root1 == root2;
  return (root1 -> data == root2 -> data) && isSymmetricUtil(root1 -> left, root2->
  right) && isSymmetricUtil(root1 -> right, root2 -> left);
}
bool isSymmetric(node * root) {
  if (!root) return true;
  return isSymmetricUtil(root -> left, root -> right);
}

Time Complexity: O(N)

Reason: We are doing simple tree traversal and changing both root1 and root2 simultaneously.

Space Complexity: O(N)

Reason: In the worst case (skewed tree), space complexity can be O(N).
