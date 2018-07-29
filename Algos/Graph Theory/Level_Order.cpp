/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void levelTraverse(TreeNode* A, int level, vector<vector<int>> &ans) {
    if(A==NULL) return;
    if(level==ans.size()) ans.push_back({});
    ans[level].push_back(A->val);
    levelTraverse(A->left, level+1, ans);
    levelTraverse(A->right, level+1, ans);
}
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int> > ans;
    levelTraverse(A, 0, ans);
    return ans;
}
