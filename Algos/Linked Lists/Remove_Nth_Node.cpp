ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode* trav = A;
    int len=0;
    while(trav) {
        len++;
        trav = trav->next;
    }
    trav = A;
    int pos = len - B;
    if(pos<=0)
        return A->next;
    len = 0;
    while(trav) {
        len++;
        if(len == pos) {
            trav->next = trav->next->next;
            break;
        }
        trav = trav->next;
    }
    return A;
}