approach :-
  

struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverse(first);
        second= reverse(second);
        struct Node *res=NULL;
        struct Node *curr=NULL;
        int c=0;
        int s=0;
        while(first!=NULL or second!=NULL)
        {
            s=c+(first?first->data:0)+(second?second->data:0);
            c=(s>=10?1:0);
            s=s%10;
            struct Node *temp=new Node(s);
            if(res==NULL) res=temp;
            else curr->next=temp;
            curr=temp;
            if(first) first=first->next;
            if(second) second = second->next;
        }
      //if carry in last menas 789+875=987+875=762(carry 1 left and while loop end then)
      if(c>0)
      {
          struct Node *temp=new Node(c);
          curr->next=temp;
      }
      return res=reverse(res);
    }
