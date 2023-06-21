ListNode* middleNode(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;

    }
     s s s s s
even 1 2 3 4 5 6 7 8 NULL stop as we reach f is NULL middle elemet is =5;
     f   f   f   f    f
     
    s s s s
odd 1 2 3 4 5 6 7 NULL  stop as we reach f->next is NULL middle element is=4
    f   f   f  f
