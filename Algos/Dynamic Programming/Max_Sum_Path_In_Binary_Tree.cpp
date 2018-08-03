/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int dfs(TreeNode* A, int &res) {
    //Base Case
    if (A == NULL)
        return 0;
 
    // l and r store maximum path sum going through left and
    // right child of root respectively
    int l = dfs(A->left,res);
    int r = dfs(A->right,res);
 
    // Max path for parent call of root. This path must
    // include at-most one child of root
    int max_single = max(max(l, r) + A->val, A->val);
 
    // Max Top represents the sum when the Node under
    // consideration is the root of the maxsum path and no
    // ancestors of root are there in max sum path
    int max_top = max(max_single, l + r + A->val);
 
    res = max(res, max_top); // Store the Maximum Result.
 
    return max_single;
}
int Solution::maxPathSum(TreeNode* A) {
    int maxi = INT_MIN;
    dfs(A, maxi);
    return maxi;
}
