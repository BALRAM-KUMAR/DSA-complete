Input:
     1          1
   /   \      /   \
  2     3    2     3
Output: Yes





code :- 
  bool isIdentical(node * node1, node * node2) {
  if (node1 == NULL && node2 == NULL)
    return true;
  else if (node1 == NULL || node2 == NULL)
    return false;

  return ((node1 -> data == node2 -> data) && isIdentical(node1 -> left, node2 -> left) && isIdentical(node1 -> right, node2 -> right));
}



Time Complexity: O(N).

Reason: We are doing a tree traversal.

Space Complexity: O(N)

Reason: Space is needed for the recursion stack. In the worst case (skewed tree), space complexity can be O(N).
