/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode* ans = new ListNode(0);
    ListNode* ptr = ans;
    ListNode* tmp;
    int key;
    map<int, stack<ListNode*>> link;
    for(int i=0;i<A.size();i++)
        if(A[i]==NULL) A.erase(A.begin()+i);
    for(int i=0;i<A.size();i++)
        link[A[i]->val].push(A[i]);
    while(link.size()) {
        ans->next = ((link.begin())->second).top();
        key = (link.begin())->first;
        tmp = link[key].top()->next;
        link[key].pop();
        if(link[key].empty())
            link.erase(key);
        if(tmp!=NULL)
            link[tmp->val].push(tmp);
        ans = ans->next;
    }
    return ptr->next;
}
