Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
Note: Modify the original array itself.

Example 1:

Input:
N = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.
Example 2:

Input:
N = 11
arr[]={10,20,30,40,50,60,70,80,90,100,110}
Output:110 10 100 20 90 30 80 40 70 50 60
Explanation: Max element = 110, min = 10, 
second max = 100, second min = 20, and 
so on... Modified array is : 
110 10 100 20 90 30 80 40 70 50 60
  
  codeeeeeeeee
        void rearrange(long long *arr, int n) 
    { 
    	int minindex=0;
    	int maxindex=n-1;
    	long long max=arr[n-1]+1;
    	for(int i=0;i<n;i++){
    	    if(i%2==0){
    	        arr[i]=(arr[maxindex]%max)*max + arr[i];
    	        maxindex--;
    	    }
    	    else{
    	         arr[i]=(arr[minindex]%max)*max + arr[i];
    	        minindex++;
    	    }
    	}
    	for(int i=0;i<n;i++){
    	    arr[i]/=max;
    	}
    	 
    }
time O(n)
space O(1)
  
problem 2:-   Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].


Example 1:

Input:
N = 2
arr[] = {1,0}
Output: 0 1
Explanation: 
arr[arr[0]] = arr[1] = 0.
arr[arr[1]] = arr[0] = 1.
 

Example 2:

Input:
N = 5
arr[] = {4,0,2,1,3}
Output: 3 4 2 0 1
Explanation: 
arr[arr[0]] = arr[4] = 3.
arr[arr[1]] = arr[0] = 4.
and so on.
  
  solution:- 
    void arrange(long long arr[], int n) {
        // Your 
        int minindex=0;
    	int maxindex=n-1;
    	//long long max=1+(*max_element(arr,arr+n));
    	for(int i=0;i<n;i++){
    	    arr[i]+=(arr[arr[i]]%n)*n;
    	}
    	for(int i=0;i<n;i++){
    	    arr[i]/=n;
    	}
    }
Peoblem 3:-Alternate positive and negative numbers
EasyAccuracy: 49.41%Submissions: 78410Points: 2
Given an unsorted array Arr of N positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
Note: Array should start with a positive number.
 

Example 1:

Input: 
N = 9
Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}
Output:
9 -2 4 -1 5 -5 0 -3 2
  
  
  codeeeeeee
  solution 1:- time O(n) and space O(n)
        void rearrange(int arr[], int n) {
	    // code here
	    vector<int> pos;
	    vector<int>neg;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            neg.push_back(arr[i]);
	        }
	        else{
	            pos.push_back(arr[i]);
	        }
	    }
	   
	   int i = 0, j = 0, k = 0;
	    while (i < neg.size() && j < pos.size()) {
	        arr[k++] = pos[j++];
	        arr[k++] = neg[i++];
	    }
	    while (j < pos.size()) {
	        arr[k++] = pos[j++];
	      }

	    while (i < neg.size()) {
	        arr[k++] = neg[i++]; 
	        
	    }
	}

solution 2:-  time O(n) space(1)
  
   
    
 


  
  
  
  
  
  
  
  
  
  
