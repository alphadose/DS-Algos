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

void check(TreeNode* A, bool &flag) {
    if(A==NULL) return;
    if(abs(getDepth(A->left, 1)-getDepth(A->right, 1))>1)
        flag = false;
    check(A->left, flag);
    check(A->right, flag);
}

int Solution::isBalanced(TreeNode* A) {
    bool flag = true;
    check(A, flag);
    return flag;
}