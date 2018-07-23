/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool check(TreeNode* A, TreeNode* B)
{
    if (A == NULL && B==NULL) return true;
    
    if((A==NULL && B!=NULL) || (A!=NULL && B==NULL)) return false;

    if(A->val!=B->val) return false;

    return check(A->left, B->left) && check(A->right, B->right);
}

int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    return check(A, B);
}