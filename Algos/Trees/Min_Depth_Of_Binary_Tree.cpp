/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void getMinDepth(TreeNode* A, int depth, vector<int> &depths) {
    if(A->left!=NULL && A->right!=NULL) {
        getMinDepth(A->left, depth+1, depths);
        getMinDepth(A->right, depth+1, depths);
    }
    else if(A->left!=NULL)
        getMinDepth(A->left, depth+1, depths);
    else if(A->right!=NULL)
        getMinDepth(A->right, depth+1, depths);
    else 
        depths.push_back(depth);
    return;
}

int Solution::minDepth(TreeNode* A) {
    vector<int> depths;
    getMinDepth(A, 1, depths);
    int mini = INT_MAX;
    for(int i=0;i<depths.size();i++)
        mini = min(mini, depths[i]);
    return mini;
}