Example 1:

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.
  
Approach1: Brute force
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]+arr[j]==K)
      {
        cnt+=1;
      }
    }
  }
 time o(n*n)
   
   
   
Approach 2:- using unordered_map
 time:- o(n)
 space:- O(1)
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
          int ans=0;
          unordered_map<int,int> m;
          for(int i=0;i<n;i++){
              int randomnum=k-arr[i];  
              if(m[randomnum]){         // is element present in map or not
                  ans+=m[randomnum];
              }
              m[arr[i]]++;             // in each case we are inserting element in map and after that we check is present
          }
          return ans;
    }
};
