idea is very simple
given linked list
1 2 3 4 5 7
linked list output
7 1 2 3 4 5
 
  ListNode *moveToFront(ListNode *head){
        if(head==NULL)
          return head;
        if(head->next==NULL)
          return head;
          ListNode *curr=head;
          ListNode *pre=NULL;
          
          while(curr->next!=NULL)
          {
              pre=curr;
              curr=curr->next;
          }
          
          pre->next=NULL;
          curr->next=head;
          return curr;
    }
