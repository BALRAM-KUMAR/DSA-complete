Arr[]= {3,1,2}          3!=6possible way
  1 2 3
  1 3 2
  2 1 3             123<132<213......
  2 3 1             sorted order(dictionary order)
  3 1 2
  3 2 1
next per of ARR[]={3 1 2} are 3 2 1
  
  edge case : if arr =321 (last permutation)
    than go first
    
Approach 1:-
  Generate all possible permutation (in sorted order using recursion)
  apply linear search
  next index per is ans
  tc(N!*N)
  
  
Approach 2:- use stl function
  vector<int> nextpermutation (vector<int> &arr)
  {
    next_permutation(arr.begin(),arr.end());
  }   tc(O(N))


  
  Approach 3:-o(N)
    
