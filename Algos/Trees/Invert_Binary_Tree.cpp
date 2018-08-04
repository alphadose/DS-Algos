/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void invert(TreeNode* A) {
    if(A==NULL) return;
    
    TreeNode* temp = A->left;
    A->left = A->right;
    A->right = temp;
    invert(A->left);
    invert(A->right);
}
TreeNode* Solution::invertTree(TreeNode* A) {
    invert(A);
    return A;
}
