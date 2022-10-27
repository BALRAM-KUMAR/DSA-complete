Count More than n/k Occurences
Given an array arr[] of size N and an element k. The task is to find all elements in array that appear more than n/k times.

Example 1:

Input:
N = 8
arr[] = {3,1,2,2,1,2,3,3}
k = 4
Output: 2
Explanation: In the given array, 3 and
 2 are the only elements that appears 
more than n/k times.
  
  solution 1:- using map
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int x=n/k;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int cnt=0;
       unordered_map<int,int>::iterator it=mp.begin();
       while(it!=mp.end()){
            if(it->second>x){
                cnt++;
                it++;
            }
            else{
            it++;
       }
      }
       return cnt;
    }
    



solution 2:- using Moore’s Voting Algorithm
