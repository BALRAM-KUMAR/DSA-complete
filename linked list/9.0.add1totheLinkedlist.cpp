Add 1 to a number represented as linked list
Approach :- 
  step 1:- reverse the given linkedlist
  step 2:- we take of three condition when head is not NULL
    con 1:- if last node of given linked list 9 (459 reversed 954 perford operation 
    con 2:- if All (node->data==9) then make node->data=0
    con 3:- else curr->data=curr->data+1; now break 
   step 3:- now again reverse the linked list
   
   Code :- 
       Node* add1tolinked(Node* head)
         {
             head=reverse(head);
             Node *curr=head;
           while(curr!=NULL)
           {
             if(curr->next=NULL and curr->data=9)
             {
               curr->data=1;
               Node *temp=new Node(0);
               temp->next=head;
               head=temp;
               curr=curr->next;
             }
             else if(curr->data==9)
             {
               curr->data=0;
               curr=curr->next;
             }
             else
             {
               curr->data=curr->data+1;
               break;
             }
            return head=reverse(head);
           }
                                                   
                                                 
