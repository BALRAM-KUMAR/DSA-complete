approach :- using map both O(N)
  step 1:- make map<int,int> m;
  step 2:- take two pointer curr and pre
  step 3:- if any value in map already present then
             destroy the reapeating node and make free(curr)
  step 4:- else put value in map and move
  
  
  
  code :- 
    node * removeDuplicate(node *head)
  {
     map<int,int> mp;
     node *curr=head;
     mp[curr->data]=1;
     node *pre=curr;
     curr=curr->next;
    while(curr!=NULL)
    {
        if(mp[curr->data])
        {
          pre->next=curr->next;
            free(curr);
        }
       else
       {
         mp[curr->data]=1;
         pre=curr
       }
      curr=pre->next;
    }
    return head;
  }
    
    
