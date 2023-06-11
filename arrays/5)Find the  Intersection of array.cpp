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
   
    // #3 Method to find the intersection elements from two given arrays - O(NLogN + MLogM) & O(1)
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) { 
    vector<int> ans;

    sort(begin(nums1), end(nums1));
    sort(begin(nums2), end(nums2));

    int i = 0, j = 0;

    while(i < nums1.size() && j < nums2.size()) {
        if(nums1[i] < nums2[j]) {
            i++;
        }
        else if(nums1[i] > nums2[j]) {
            j++;
        }
        else {
            ans.push_back(nums1[i]);
            int tmpInd1 = i; int tmpInd2 = j; // Requires to skip the correct duplicates correctly
            // Skip the duplicates if present
            while(i < nums1.size() && nums1[tmpInd1] == nums1[i]) i++;
            while(j < nums2.size() && nums2[tmpInd2] == nums2[j]) j++;
        }
    }

    return ans;
}
    
    
    
    
    
    
    
    
    
