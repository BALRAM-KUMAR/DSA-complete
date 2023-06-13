Find the Duplicate Number

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3
  
 solution 1:-Brute Force

Intuition: We have to think of a data structure that does not store duplicate elements. So can we use a Hash set? Yes! We can. As we know HashSet only stores unique elements.

Approach: 1

Declare a HashSet.
Run a for loop from starting to the end.
Put every element of the array in the set.
Store size of the set in a variable K.
Now put all elements of the set in the array from the starting of the array.
Return K.
  int removeDuplicates(int arr[], int n) {
  set < int > set;
  for (int i = 0; i < n; i++) {
    set.insert(arr[i]);
  }
  int k = set.size();
  int j = 0;
  for (int x: set) {
    arr[j++] = x;
  }
  return k;
}
Time complexity: O(n*log(n))+O(n)

Space Complexity: O(n) 

solution 2:- using two pointer
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
Time complexity: O(n)

Space Complexity: O(1)
  solution 3:- using vector(it is only for soprted arrays)
    int remove_duplicate(int a[],int n){
        
          int N=*max_element (a,a+n);
           vector<int> v(N+1,0);
           //int A[N];
           int j=0;
             for(int i=0;i<n;i++){
                 v[a[i]]++;
             }
             for(int i=0;i<N+1;i++){
                 if(v[i]>0){
                     a[j]=i;
                     j++;
                 }
             }
             
           return j;  
    }
    Time complexity: O(n)

Space Complexity: O(1)
  
  
  
  another question like 
  Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

Example 1:

Input:
N = 4
a[] = {0,3,1,2}
Output: -1
Explanation: N=4 and all elements from 0
to (N-1 = 3) are present in the given
array. Therefore output is -1.
Example 2:

Input:
N = 5
a[] = {2,3,1,2,3}
Output: 2 3 
Explanation: 2 and 3 occur more than once
in the given array.
  
  code:-  
    vector<int> duplicates(int arr[], int n) {
        // code here
          vector<int> v(n,0);
          vector<int> f;
            for(int i=0;i<n;i++){
                 v[arr[i]]++;
            }
            
            for(int i=0;i<n;i++){
                if(v[i]>1){
                    f.push_back(i) ;
                      
                    }
            }

            if(!f.empty()){
                return f;
            }
           else{
               f.push_back(-1);
               return f;
           }
    }

 Approach :- optimal takes O(n) and sc =O(1)
   -> we use tortoise method where slow move one step and fast move two step
   -> this is for finding one duplicate only
   ex:-index:-  0 1 2 3 4 5 6 7 8 9
       value:-  2 5 9 6 9 3 8 9 7 1
         int Duplicate(vector<int> &nums)
       {
         int slow=nums[0];
         int fast=nums[0];
         do{
           slow=nums[slow];
           fast=nums[nums[fast]];
         }while(slow!=fast)
           
           fast=nums[0];
         while(slow!=fast){
           slow=nums[slow];
           fast=nums[fast];
         }
         return slow;
         
       }
