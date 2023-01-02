 method 1 :- using map  which is taking O(n) and space o(n)
 goal :- if any of the head repeated then loop exist
  step 1 :- create unordered map which is taking node and int
  step 2 :- traversed the linked list if node not reapeted then push in map
             otherwise true (loop detect)
  step 3 :- if not repeated then return false (not detect)
bool detectLoop(node *head)
  {
   
      if(!head)
        return false
      unordered_map< node*,int> un;
         while(head)
         {
            if(!un[head])
            {
              un[head]=1;
              head=head->next;
            }
           else return true;
         }
   return false;
 }

method 2 :- using slow and fast pointer O(n) and space =O(1)
  goal :- if any of the two pointer matched then loop detect
  steps:- //using two pointers and moving one pointer(slow) by one node and 
        //another pointer(fast) by two nodes in each iteration.
  step 2:-  //if the node pointed by first pointer(fast) or the node 
            //next to it is null, we return false.
  step 3:-  //if we reach here it means both the pointers fast and slow point to 
           //same node which shows the presence of loop so we return true.
     
bool detectLoop(Node* head)
    {
        if(!head) return false;
        
     
        Node* fast = head->next;
        Node* slow = head;
        
        while( fast != slow)
        {
            //if the node pointed by first pointer(fast) or the node 
            //next to it is null, we return false.
            if( !fast || !fast->next ) 
            return false;
            
            fast=fast->next->next;
            slow=slow->next;
        }
        //if we reach here it means both the pointers fast and slow point to 
        //same node which shows the presence of loop so we return true.
        return true;
    }
    
