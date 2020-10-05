int height(Node* root) {
    if (root == NULL)
        return 0;
    int l = height(root->left);
    int r = height(root->right);
    return ((l > r) ? height(root->left) : height(root->right)) + 1;
}
