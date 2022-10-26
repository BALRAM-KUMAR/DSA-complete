Longest consecutive subsequence

Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.
 

Example 1:

Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output:
6
Explanation:
The consecutive numbers here
are 1, 2, 3, 4, 5, 6. These 6 
numbers form the longest consecutive
subsquence.
Example 2:

Input:
N = 7
a[] = {1,9,3,10,4,20,2}
Output:
4
Explanation:
1, 2, 3, 4 is the longest
consecutive subsequence.
  
  solution:-
   int findLongestConseqSubseq(int arr[], int N)
    {
        unordered_set<int> s;
          for(int i=0;i<N;i++){
              s.insert(arr[i]);
          }
          int longest_sequence=0;
          for(int i=0;i<N;i++){
              if(!s.count(arr[i]-1)){
                  int currentnum=arr[i];
                  int current_sequence=1;
                  while(s.count(currentnum+1)){
                      currentnum+=1;
                      current_sequence+=1;
                      }
                      longest_sequence=max(longest_sequence,current_sequence);
              }
          }
          return longest_sequence;
    }
time=O(n)
space=O(n)
