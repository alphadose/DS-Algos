/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* Solution::flatten(TreeNode* A) {
    if (!A)
        return A;
    TreeNode* root = A;
    
    while (A)
    {
        if (A->left)
        {
            TreeNode* rightSubTree = A->left;
            while (rightSubTree->right)
                rightSubTree = rightSubTree->right;
            rightSubTree->right = A->right;
            A->right = A->left;
            A->left = NULL;
        }
        A = A->right;
    }
    return root;
}