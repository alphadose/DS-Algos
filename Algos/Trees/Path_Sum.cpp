/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void find(TreeNode* node, int &B, int sum, bool &ans) {
    if(node==NULL) return;
    sum+=node->val;
    if((node->left==NULL && node->right==NULL) || ans) {
        if(sum==B) ans = true;
        return;
    }
    find(node->left, B, sum, ans);
    find(node->right, B, sum, ans);
}
int Solution::hasPathSum(TreeNode* A, int B) {
    bool ans = false;
    find(A, B, 0, ans);
    return ans;
}