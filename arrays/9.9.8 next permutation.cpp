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
   1. longer perfix match  (back side){arr[i]<a[i+1]}
                  find the break point
   2. find>1 but the smallest one that u say close
   3. try to place in sorted array
   
   
   example:- 
      arr[]={2 1 5 4 3 0 0 }
               ^  |.........|
1.             break     longest prefix match
             point
             ind=i;
2. now swap which is slightly greater
updatation 2 3 5 4 1 0 0  
3. reverse ind to n-1
nxt per:- 2 3 0 0 1 4 5
  
code:- 
  for(int i=n-2;i>=0;i--)
  {
    if(arr[i]<arr[i+1]){
       ind=i;
       break;
    }
  }
//edge case
if(ind==-1)
  return arr;

for(int i=n-1;i>=ind;i--)
{
  if(arr[i]>arr[ind]
     {
       swap(arr[i],arr[ind])
         break;
     }
}
     
reverse(arr,ind+1,n-1)
     

















