Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node *head=NULL;
        Node *curr=NULL;
        while(head1 and head2)
        {
            if(head1->data==head2->data)
            {
                Node *temp=new Node(head1->data);
                if(head==NULL)
                {
                    head=temp;
                    curr=temp;
                }
                else
                {
                    curr->next=temp;
                    curr=curr->next;
                }
                head1=head1->next;
                head2=head2->next;
            }
            else
            {
                if(head1->data>head2->data)
                {
                    head2=head2->next;
                }
                else
                {
                    head1=head1->next;
                }
            }
        }
        return head;
}
