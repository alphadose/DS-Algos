/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* root) {
    vector<int> vector;
    stack<TreeNode *> stack;
    TreeNode *pCurrent = root;

    while(!stack.empty() || pCurrent)
    {
        if(pCurrent)
        {
            vector.push_back(pCurrent->val);
            stack.push(pCurrent);
            pCurrent = pCurrent->left;
        }
        else
        {
            TreeNode *pNode = stack.top();
            stack.pop();
            pCurrent = pNode->right;
        }
    }
    return vector;
}