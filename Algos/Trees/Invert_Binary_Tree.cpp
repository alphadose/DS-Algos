/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* invert(TreeNode* A, TreeNode* ans) {
    if(A==NULL) return ans;
    if(A->left!=NULL) {
        ans->right = new TreeNode(A->left->val);
        ans->right = invert(A->left, ans->right);
    }
    if(A->right!=NULL) {
        ans->left = new TreeNode(A->right->val);
        ans->left = invert(A->right, ans->left);
    }
    return ans;
}
TreeNode* Solution::invertTree(TreeNode* A) {
    TreeNode* ans = new TreeNode(A->val);
    invert(A, ans);
    return ans;
}