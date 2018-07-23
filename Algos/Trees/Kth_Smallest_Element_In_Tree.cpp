/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void getInorder(TreeNode* node, int &k, int &B, int &ans)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    getInorder(node->left, k, B, ans);
 
    if(++k==B) {
        ans = node->val;
        return;
    }
    
    /* now recur on right child */
    getInorder(node->right, k, B, ans);
}

int Solution::kthsmallest(TreeNode* A, int B) {
    int k = 0, ans=-1;
    getInorder(A, k, B, ans);
    return ans;
}
