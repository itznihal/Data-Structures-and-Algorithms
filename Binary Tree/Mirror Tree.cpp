class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(struct Node* root) {
    // code here
    
    if(!root) return;
    
    mirror(root->left);
    mirror(root->right);
    swap(root->left , root->right);
    
    
}
};