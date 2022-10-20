
Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

Example 1:

Input:
5
4 2 -3 1 6

Output: 
Yes

Explanation: 
2, -3, 1 is the subarray 
with sum 0.
Example 2:

Input:
5
4 2 0 1 6

Output: 
Yes

Explanation: 
0 is one of the element 
in the array so there exist a 
subarray with sum 0.
  
  Approach:-
      consider all prefix sum and notice that every sumarray with zero sum when
        1) either a prefix sum repeats itself
        2) or prefix sum becomes zero
        
        code 
        
        bool subArrayExists(int arr[], int n)
    {
        //Your code here
        //using map to store the prefix sum which has appeared already.
    	unordered_map<int,bool> sumMap;
    
    	int sum = 0;
    	//iterating over the array.
    	for (int i = 0 ; i < n ; i++)
    	{
    	    //storing prefix sum.
    		sum += arr[i];
    
    		//if prefix sum is 0 or if it is already present in map then it is
    		//repeated which means there is a subarray whose summation is 0,
    		//so we return true.
    		if (sum == 0 || sumMap[sum] == true)
    			return true;
            
            //storing true in map for every prefix sum obtained.
    		sumMap[sum] = true;
    	}
    	//returning false if we don't get any subarray with 0 sum.
    	return false;
    
    }
