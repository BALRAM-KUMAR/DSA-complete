int getHeight(TreeNode<int> *root) {
    if (root == nullptr) {
        return 0;  // Base case: Empty tree has height 0
    }

    int maxHeight = 0;
    for (int i = 0; i < root->children.size(); i++) {
        int childHeight = getHeight(root->children[i]);
        maxHeight = max(maxHeight, childHeight);
    }

    return maxHeight +1;  // Adding 1 to account for the root node
}
