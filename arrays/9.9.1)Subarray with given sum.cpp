given unsorted array
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12. [2+3+7] first subarray

solution 1:- simple approach is prefixsum
1. add element in contiguous way
2. iterate whole arrays with three condition
    if sum==s
    then push first and last index in vector and return
    else sum<s
     then sum=sum+arr[i];
    else 
      sum=sum-arr[first index]
      first index++
      i--
3  if doesnt exist then return -1
  
  code
  vector<int> subarraySum(int arr[], int n, long long s)
    {
          vector<int>ans;
          int first_index=0;
          long long sum=arr[0];
          if(s==0){
              ans.push_back(-1);
              return ans;
          }
          for(int i=1;i<=n;i++){
              if(sum==s){
                  ans.push_back(first_index+1);
                  ans.push_back(i);
                  return ans;
              }
              else if(sum<s){
                  sum=sum+arr[i];
              }
              //go to first index and substract sum
              else{
                  sum=sum-arr[first_index];
                  first_index++;
                  i--;
              }
          }
          ans.push_back(-1);
          return ans;
    }

solution 2:- using hashmap 
