https://takeuforward.org/data-structure/merge-overlapping-sub-intervals/
https://leetcode.com/problems/merge-intervals/discuss/1644017/C%2B%2B-EASY-TO-SOLVE-oror-Beginner-Friendly-with-Detailed-Explanations
#include<bits/stdc++.h>

using namespace std;
vector < vector < int >> merge(vector < vector < int >> & intervals) {

  sort(intervals.begin(), intervals.end());
  vector < vector < int >> merged;

  for (int i = 0; i < intervals.size(); i++) {
    if (merged.empty() || merged.back()[1] < intervals[i][0]) {
      vector < int > v = {
        intervals[i][0],
        intervals[i][1]
      };

      merged.push_back(v);
    } else {
      merged.back()[1] = max(merged.back()[1], intervals[i][1]);
    }
  }

  return merged;
}

int main() {
  vector < vector < int >> arr;
  arr = {{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};
  vector < vector < int >> ans = merge(arr);

  cout << "Merged Overlapping Intervals are " << endl;

  for (auto it: ans) {
    cout << it[0] << " " << it[1] << "\n";
  }
}
Output:

Merged Overlapping Intervals are
1 6
8 11
15 18

Time Complexity: O(NlogN) + O(N). O(NlogN) for sorting and O(N) for traversing through the array.

Space Complexity: O(N) to return the answer of the merged intervals.
  
  
  
  one more easy solution
  
  
  vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        if(intervals.size() == 0)
            return ans;
        sort(intervals.begin(), intervals.end());
        int l = intervals[0][0];
        int r = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] <= r)
                r = max(r, intervals[i][1]);
            else{
                ans.push_back({l,r});
                l = intervals[i][0];
                r = intervals[i][1];
            }
        }
        ans.push_back({l,r});
        return ans;
    }
