subarrays-always contiguous
lets take example arrays 10 20 30 40
  then subarrays
      10
      10 20
      10 20 30
      10 20 30 40
      20
      20 30
      20 30 40
      30 40
      40
  printing subarray of an array
   for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++)
        {
          cout<<arr[k]<<" ";
        }}}

To finding largest sum of subarrays
solution 1:- bruteforce technique

Idea: For each subarray arr[i..j], calculate its sum.
Time Complexity: O(N3)
Space Complexity: O(1)
  code
  int maxSum_subarrays(int arr[],int n)
    {
    int maxSum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           int currSum=0;
          for(int k=i;k<j;k++){
              currSum+=arr[k];
          }
          maxSum=max(currSum,maxSum);
        }
    }
    return maxSum;
}



Solution 2. Prefix Sum Technique:
Idea: For each subarray arr[i..j], calculate its sum. Using prefix sum can
reduce time to calculate the sum of arr[i..j] to O(1)
Time Complexity: O(N2)
Space Complexity: O(N)
  
  main point is that we have to make one prefix arrays with the help of original arrays
     arr[] :- 1 2 4 -2 3
    prefix[0]=arr[0]
    prefix[i]=prefix[i-1]+arr[i]  iterate over 1 to n
    prefix[] :- 1 3 7  5 8 
  code
    int maxSum_subarrays(int arr[],int n){
        int prefix[n]={0};
        prefix[0]=arr[0];
        
       for(int i=1;i<n;i++){
          prefix[i]=prefix[i-1]+arr[i];
          }
          int maxSum=INT_MIN;
          
          for(int i=0;i<n;i++){
              for(int j=i;j<n;j++){
                int currSum=i>0?prefix[j]-prefix[i-1]:prefix[j];
                maxSum=max(maxSum,currSum);
                }
             }
           return maxSum;
  }
  




Solution 3:-     
Kadane’s Algorithm:
Idea: Start taking the sum of the array, as soon as it gets negative, discard
the current subarray, and start a new sum.
Time Complexity: O(N)
Space Complexity: O(1)
  
        arr[]=-2 3 4 -1 5 -12 6 1 3 2
  current sum= 0 3 7 6 11 0 6 7 10 12
  largest sum= 0 3 7 7 11 11 11 11 11 12 -> max sum




long long maxSubarraySum(int arr[], int n){
        
         long long current_sum=0;
         long long largest_sum=INT_MIN;
          for(int i=0;i<n;i++)
          {
              current_sum=current_sum+arr[i];
              if(largest_sum<current_sum)
              {
                  largest_sum=current_sum;
              }
              if(current_sum<0)
              {
                  current_sum=0;
              }
             // largest_sum=max(current_sum,largest_sum);
          }
       return largest_sum;   
    }
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
