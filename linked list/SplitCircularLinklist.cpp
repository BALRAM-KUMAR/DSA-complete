
Method :- 
  1. find the mid address of linked list
  2. Break the linked list through the mid 
  3. store temp= mid next then connect mid next to head (1 linked list generated)
  4. head2=temp and last connect to head2
  
  time=O(n)
  space =O(1)


void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    
         struct Node* slow=head;
         struct Node* fast=head->next;
        while(fast!=head and (fast->next)!=head){
        slow=slow->next;
        fast=fast->next->next;
          }
         *head1_ref=head;
         *head2_ref=slow->next;
         slow->next=*head1_ref;
         struct Node *temp=*head2_ref;
         while(temp->next!=head)
         {
             temp=temp->next;
         }
         temp->next=*head2_ref;
         
}
