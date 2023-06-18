ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1){
            return head;
        }
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *cur=dummy,*nex=dummy,*pre=dummy;
        int count=0;
        while(cur->next)
        {
            cur=cur->next;
            count++;
        }
        while(count>=k)
        {
            cur=pre->next;
            nex=cur->next;
            for(int i=1;i<k;i++)
            {
                cur->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=cur->next ;
            }
            pre=cur;
            count-=k;
        }
        return dummy->next;
    }


example :-      ............!(s1)
        pre-->  1     2     3   4   5   7    8   9    8
            (s2)^......
        ..............^(s3)
               cur    nxt...^
