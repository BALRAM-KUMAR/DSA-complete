Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
Example 1:

Input:
N = 6
arr[] = {3,0,0,2,0,4}
Output:
10
Explanation: 

Example 2:

Input:
N = 4
arr[] = {7,4,0,9}
Output:
10
Explanation:
Water trapped by above 
block of height 4 is 3 units and above 
block of height 0 is 7 units. So, the 
total unit of water trapped is 10 units.
Example 3:

Input:
N = 3
arr[] = {6,9,9}
Output:
0
Explanation:
No water will be trapped.
  3 solution given below that 1 T:O(n2) and s(1) 2:O(N,N) and 3: O(N,1)
    solution 1 :- Bruteforce
    solution 2:- 
      long long trappingWater(int arr[], int n){
       
        // left[i] contains height of tallest bar to the 
        // left of bar at ith index including itself.
        vector<int> left(n, 0);
      
        // right[i] contains height of tallest bar to 
        // the right of bar at ith index including itself. 
        vector<int> right(n, 0); 
      
        long long water = 0;
      
        // Storing values of tallest bar from first index till ith index.
        left[0] = arr[0];
        for (int i = 1;i < n;i++) {
            left[i] = max(left[i - 1], arr[i]);
        }
      
        // Storing values of tallest bar from last index till ith index. 
        right[n-1] = arr[n-1]; 
        for (int i = n - 2;i >= 0;i--) {
            right[i] = max(right[i + 1], arr[i]);
        }
      
        // Storing the result by choosing the minimum of heights of tallest bar to
        // the right and left of the bar at current index and also subtracting the
        // value of current index to get water accumulated at current index.
        for (int i = 0;i < n;i++) {
            water += max(0, min(left[i], right[i]) - arr[i]);
        }
        // returning the result.
        return water;
    }
solutinon 3:-
  
  int trappingWater(int arr[], int n){
       int lo=0;
        int hi=n-1;
       int mi=0;
        int ma=0;
        int ans=0;
    while(lo<=hi){
        if(a[lo]<a[hi]){
          if(a[lo]>mi){
            mi=a[lo];
          }
          else{
            ans =ans+(mi-a[lo]);
          }
         lo++;
        }
      else{
        if(a[hi]>ma){
          ma=a[hi];
        }
        else{
          ans=ans+(ma-a[hi]);
        }
        hi--;
      }
    return ans;
 }
 time =O(N)
 space=O(1)
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
    }
