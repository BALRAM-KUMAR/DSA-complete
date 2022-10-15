https://takeuforward.org/data-structure/intersection-of-two-sorted-arrays/
solution:-1
Brute Force Approach:
For a brute force approach, we are given 2 arrays, what we can do is take the element from array A and search if it is present in array B.
  
#include<bits/stdc++.h>

using namespace std;

int main() {
  vector < int > A {1,2,3,3,4,5,6,7};
  vector < int > B {3,3,4,4,5,8};

  vector < int > ans;
  vector < int > visited(B.size(), 0); // to maintain visited 
  int i = 0, j = 0;
  for (i = 0; i < A.size(); i++) {
    for (j = 0; j < B.size(); j++) {

      if (A[i] == B[j] && visited[j] == 0) { 
      //if element matches and has not been matched with any other before
        ans.push_back(B[j]);
        visited[j] = 1;

        break;
      } else if (B[j] > A[i]) break; 
        //because array is sorted , element will not be beyond this
    }
  }
  Time Complexity: O(n2)

Space Complexity: O(n) for the extra visited vector
 
solution2:-  using set map which is not containing duplicate value
    
    
    
    
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
         
        //there is problem in upper logic because if input is [1,2,2,1] [2,2] then it will count many time 1 and 2 which is wrong so 
        // we are using set to map the one arrays to another values
             unordered_set<int> mymap;
                int cnt = 0;
        for (int i = 0; i < n; i++){
            mymap.insert(a[i]);
        } 
        
        for (int i = 0; i < m; i++) {
            if (mymap.find(b[i]) != mymap.end()) {
                mymap.erase(b[i]);
                cnt++;
            }
        }
        
        return cnt;
  }
  
  Expected Time Complexity: O(n + m).
Expected Auxiliary Space: O(min(n,m))
  
 Solution 3: 2 Pointer approach
   
    
    
    
    
    
    
    
    
    
    
