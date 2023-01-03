method 1:-using unordered map O(n) and space=O(n)
  step 1:- make unordered map which have node* and int
  step 2:- make two pointer pre and curr
  step 3:- traverse the linkedlist untill curr!Null and store node in map then assign pre=curr;
  step 4:- if loop detect then break using pre->next=NULL
      linkedlist 1 2 3 4 5 6 7 5           
      dry run:- pre|head=1|1|2|3|4|5|6|7
               curr|head=1|2|3|4|5|6|7|5=already in map dont go the else run and 7->NULL; and break;
void deleteLoop(node *head)
    {
       unordered_map<node*,int> un;
       node *pre=head;
       node *curr=head;
      while(curr!=NULL)
      {
        if(!un[curr])
        {
          un[curr]=1;
          pre=curr;
          curr=curr->next;
        }
        else
        {
          pre->next=NULL;
          break;
        }
      }
    }
method 2:- using slow and fast pointer time O(N) and space O(N)
  step 1: create two pointer slow and fast
  step 2: detect the loop in the linkedlist
           low=low->next
           fast=fast->next->next
   step 3: if loop detected the two case is generated 1. last node pointing to directly head
                                                      2. last node pointing to other than head node
   step 4 : remove last node (which is forming the loop) slow=head(first must check)
               and assign to NULL to the fast next
  void deleteLoop(node *head)
     {
       node *slow=head;
       node *fast=head;
  //loop detection
        while(slow!=NULL and fast!=NULL and fast->next!=NULL)
         {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
              break;
         }
  //two case is generated
     if (slow==head)
      {
         while(fast->next!=slow)
         {
          fast=fast->next;
         }
         fast->next=NULL:
      }
      else if (slow==head)
      {
         while(fast->next!=slow)
         {
          fast=fast->next;
         }
         fast->next=NULL:
      }
}
      
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
