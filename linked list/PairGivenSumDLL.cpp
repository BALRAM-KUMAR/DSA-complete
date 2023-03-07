approach 1:-
  1. take first value and iterate over DLL untill NULL
  2. if sum =targetsum then push in vector and first=first->next
  3. repeat step 1 untill first is not NULL
  4. if NULL ancounter return vector pair
  
  time =O(n*n) space O(1)
    

    
approach 2:-
  1. take two pointer front and last 
  2. front is poninting to front/head and last is pointing to last of DLL
  3. iterate over DLL till front==last and front==last->next
     3.1 sum=f->val+l->val;
     3.2 if(sum==targetsum)
           push pair in vector and move both pointer
     3.3 else if (sum<targetsum)
           move front->next
     3.4 else
           move last->prev
  4. return required vector
  
  time = O(n) space = O(1)





vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        vector<pair<int,int>> sumPair;
        Node *front=head;
        Node *last=head;
        while(last->next)
        {
            last=last->next;
        }
        while(front!=last and front!=last->next)
        {
           int sum=(front->data+last->data);
            if(sum==target){
                sumPair.push_back(make_pair(front->data, last->data));
                front=front->next;
                last=last->prev;
            }
            else if(sum < target){
                front=front->next;
            }
            else{
                last=last->prev;
            }
        }
        return sumPair;
        
    }
