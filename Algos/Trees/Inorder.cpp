/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void getInorder(TreeNode* node, vector<int> &ans)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    getInorder(node->left, ans);
 
    /* then print the data of node */
    ans.push_back(node->val);
 
    /* now recur on right child */
    getInorder(node->right, ans);
}
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> ans;
    getInorder(A, ans);
    return ans;
}