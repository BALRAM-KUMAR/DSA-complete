
Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted. 
 

Example 1:

Input:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
Output:
Yes
Explanation:
a2[] is a subset of a1[]

approach:-
    

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int, int> um, um2;

    for (int i = 0; i < n; i++) {
        um[a1[i]]++;
    }
    for (int i = 0; i < m; i++) {
        um2[a2[i]]++;
    }

    int count = 0;
    for (auto it = um2.begin(); it != um2.end(); it++) {
        if (um[it->first] >= it->second) {
            count+=it->second;
        }
    }

    if (count == m)
        return "Yes";
    else
        return "No";
}
