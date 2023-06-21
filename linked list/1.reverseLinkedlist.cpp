node* reverse(node *head)
{
  if (head == NULL)
    return head;
  node *curr=head;
  node *pre=NULL;
  node *temp;
  while(curr)
  {
    temp=curr->next;
    curr->next=pre;
    pre=curr;
    curr=temp;
  }
  return pre;
}
recursive 
node* recreverse(node *head)
{
    if(head==NULL || head->next==NULL)
    {
      return head;
    }
   node *newNode=recreverse(head->next);
      node *tail=head->next;
        tail->next=head;
        head->next=NULL;
      return newHead;
}
  
