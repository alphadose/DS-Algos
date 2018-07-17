/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    ListNode* ptr = A;
    map<int, ListNode*> node;
    int i=0;
    while(ptr) {
        node[i++] = ptr;
        ptr = ptr->next;
    }
    ListNode* res = new ListNode(0);
    ptr = res;
    i--;
    for(int j=0;j<=i/2;j++) {
        res->next = node[j];
        res = res->next;
        res->next = node[i-j];
        res = res->next;
    }
    res->next = NULL;
    return ptr->next;
}