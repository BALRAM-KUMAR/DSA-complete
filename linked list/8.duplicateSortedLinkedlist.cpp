approach :- simple just search one after one o(n) and space o(1)
   step 1:- loop when linedlist is not null
   step 2:- if node->data == node next data then connect node to next to next 
            else just move forward
   
   node* duplicate(node *head)
            {
              node *temp=head;
              while(temp!=NULL)
              {
                if(temp->data==temp->next->data)
                {
                  temp->next=temp->next->next;
                }
                else
                  temp=temp->next;
              }
              return head;
            }
