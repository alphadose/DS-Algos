/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* res = A;
    map<int, int> track;
    while(res) {
        if(track.find(res->val)==track.end())
            track[res->val] = 1;
        else
            track[res->val]++;
        res = res->next;
    }
    res = A;
    ListNode* ans = new ListNode(0);
    ListNode* ptr = ans;
    while(res) {
        if(track[res->val]==1) {
            ans->next = res;
            ans = ans->next;
        }
        res = res->next;
    }
    ans->next = NULL;
    return ptr->next;
}