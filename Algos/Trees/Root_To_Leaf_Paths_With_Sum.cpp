/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void find(TreeNode* A, vector<int> &temp, vector<vector<int>> &ans, int sum, int &B) {
    if(A==NULL) return;
    sum+=A->val;
    temp.push_back(A->val);
    if(A->right==NULL && A->left==NULL) {
        if(sum==B) ans.push_back(temp);
        temp.pop_back();
        return;
    }
    find(A->left, temp, ans, sum, B);
    find(A->right, temp, ans, sum, B);
    temp.pop_back();
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<int> temp;
    vector<vector<int>> ans;
    find(A, temp, ans, 0, B);
    return ans;
}
