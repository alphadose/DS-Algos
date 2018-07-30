/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
TreeNode* convert(TreeNode* sol, int low, int high, vector<int> &ans) {
    if(low>high) return sol;
    if(sol==NULL) { 
        sol = new TreeNode(0);
    }
    int mid = low + (high-low)/2;
    sol->val = ans[mid];
    sol->right = convert(sol->right, mid+1, high, ans);
    sol->left = convert(sol->left, low, mid-1, ans);
    return sol;
}
TreeNode* Solution::sortedListToBST(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> ans;
    if(A==NULL) return NULL;
    while(A) {
        ans.push_back(A->val);
        A=A->next;
    }
    sort(ans.begin(),ans.end());
    TreeNode* sol = new TreeNode(0);
    sol = convert(sol, 0, ans.size()-1, ans);
    return sol;
}
