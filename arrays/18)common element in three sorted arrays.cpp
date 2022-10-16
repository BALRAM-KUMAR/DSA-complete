Solution 1:- using set

 vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            //code here.
              unordered_set<int> myset;
              unordered_set<int> myset1;
              vector<int> v;
                
                for(int i=0;i<n1;i++){
                    myset.insert(a[i]) ;             
                    }
                 for(int i=0;i<n2;i++){
                       if(myset.find(b[i])!=myset.end()){
                            
                            v.push_back(b[i]);
                            myset.erase(b[i]);
                            }
                       }
                 
              //return v;
              for(int i=0;i<n3;i++){
                    myset1.insert(c[i]) ;             
                    }
                    
                vector<int> v1;
                for(int i=0;i<v.size();i++){
                      if(myset1.find(v[i])!=myset1.end()){
                          v1.push_back(v[i]);
                          myset1.erase(v[i]);
                      }
                }
                return  v1;
                
                //one more solution is there take care of that bcs it is solved without using any additional data structures
               
        }

Expected Time Complexity: O(n1 + n2 + n3)
Expected Auxiliary Space: O(n1 + n2 + n3)
  
  Solution 2:- 3 pointer approach
    Maintain 3 pointers, one for each array and traverse till any of them reaches the end of the array
    note :- without using any additional data structure
    
    code  
    
    
    vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i = 0, j = 0, k = 0;
            
            vector <int> res;
            int last = INT_MIN;
            while (i < n1 and j < n2 and k < n3)
            {
                if (A[i] == B[j] and A[i] == C[k] and A[i] != last) 
                {
                    res.push_back (A[i]);
                    last = A[i];
                    i++;
                    j++;
                    k++;
                }
                else if (min ({A[i], B[j], C[k]}) == A[i]) i++;
                else if (min ({A[i], B[j], C[k]}) == B[j]) j++;
                else k++;
            }
            return res;
        }
Expected Time Complexity: O(n1 + n2 + n3)
Expected Auxiliary Space: O(n1 + n2 + n3)
      
