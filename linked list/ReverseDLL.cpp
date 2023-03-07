
time =O(n)
space =O(1)
Node* reverseDLL(Node * head)
{
    //Your code here
    if(head == NULL || head->next == NULL)
    return head;
    
    struct Node *prev = NULL, *curr = head;
    
    while(curr != NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        
        curr = curr->prev;
    }
    
    return prev->prev;
}
