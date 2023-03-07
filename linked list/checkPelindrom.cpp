approach 1:- 
  1. reverse the linked list 
  2. compare with orginal linklist 
  3. if both are same 
          return true
    else 
        return false
 
      time = O(N) space=O(N)
      
 
approach 2:- 
   1. Find mid
   2. reverse the linklist after mid
   3. take two pointer ptr1=head and ptr2=mid->next (after reversing)
   4. compare ptr1 == ptr2 and move ahead 
       if any not eqaul 
         return 0
       else
         return 1
	   
	       
	       
time = O(N) space=O(N)
         
Node* reverse(struct Node* head)
	{
		// Initialize current, previous and next pointers
		Node* current = head;
		Node *prev = NULL, *next = NULL;

		while (current != NULL) {
			// Store next
			next = current->next;
			// Reverse current node's pointer
			current->next = prev;
			// Move pointers one position ahead.
			prev = current;
			current = next;
		}
		return prev;
	}
  
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head==NULL || head->next==NULL)
        {
            return true;
        }
         Node *slow=head;
         Node *fast=head;
           while(fast->next!=NULL and fast->next->next!=NULL)
           {
               slow=slow->next;
               fast=fast->next->next;
           }
           slow->next=reverse(slow->next);
           slow=slow->next;
           while(slow!=NULL)
           {
               if(head->data!=slow->data)
               {
                   return false;
               }
               head=head->next;
               slow=slow->next;
           }
           return true;
    }
           
