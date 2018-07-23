/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int getDepth(TreeNode* A, int depth) {
    if(A == NULL) return depth;
    int maxi=-1;
    maxi = max(getDepth(A->left, depth+1),maxi);
    maxi = max(getDepth(A->right, depth+1),maxi);
    return maxi;
}

int Solution::maxDepth(TreeNode* A) {
    int depth = getDepth(A, 0);
    return depth;
}