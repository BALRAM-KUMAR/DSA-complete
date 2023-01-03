Time O(n) and spaceO(1)
  approach :- 
    step 1:- Detect a loop (slow==fast(loop detached))
    step 2:- slow=head going to staring and last is going to search from ending
    step 3:- if slow==fast then (finded junction point)
    step 4:- return slow or fast both have same things
    
  code:- 
       node *searchStartingpointOfLoop(node *head)
             {
                node *slow=head;
                node *fast=head;
              while(slow!=NULL and fast!=NULL and fast->next!=NULL)
              {
                slow=slow->next;
                fast=fast->next->next;
                  if(slow==fast)
                  {
                    break
                  }
              }
       if(slow!=fast) return NULL;
           low=head; //searching from starting
           while(slow!=fast)
           {
             slow=slow->next;
             fast=fast->next;
           }
    return slow;
  }
    
