A simple But it is not good approach
Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node *curr=head;
        if(head==NULL)
          return NULL;
        if(head->next==NULL)
           {
               Node *temp=new Node((head->data)+1);
               return temp;
           }
           long long final=((curr->data)*10)+(curr->next->data);
           curr=curr->next->next;
         while(curr!=NULL)
         {
             final=(final*10)+(curr->data);
             curr=curr->next;
         }
         Node *temp=new Node(final+1);
               return temp;
    }
