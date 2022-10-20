https://takeuforward.org/data-structure/merge-two-sorted-arrays-without-extra-space/
https://www.geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/
 vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here

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
