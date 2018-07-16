ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    if(!A)
        return B;
    if(!B)
        return A;
        
    ListNode *res = new ListNode(0); // Don't do ListNode* res = NULL; *resPtr or 
    ListNode *resPtr = res;          // filling the list gives segmentation fault.
    while(A && B)
    {
        if(A->val <= B->val)
        {
            res->next = A;
            A = A->next;
        }
        else
        {
            res->next = B;
            B = B->next;
        }
        res = res->next;
    }
    
    while(A)
    {
        res->next = A;
        res = res->next;
        A = A->next;
    }
    while(B)
    {
        res->next = B;
        res = res->next;
        B = B->next;
    }
    return resPtr->next;
}