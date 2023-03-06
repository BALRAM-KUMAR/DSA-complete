Method 1:- 
  
bool isCircular(Node *head)
{
   // Your code here
   Node *slow=head;
        Node *fast=head;
        while(fast!=NULL and fast->next!=NULL and slow!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                return true;
            }
        }
        return false;
}

Method 2:- 
  
  
    bool isCircular(Node *head)
{
   // Your code here
   Node *temp=head->next;
    while(temp)
    {
        if(temp==head)
        {
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}
