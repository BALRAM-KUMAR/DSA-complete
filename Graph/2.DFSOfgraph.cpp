You are given a connected undirected graph. Perform a Depth First Traversal of the graph.

  class Solution {
    
    private:
      void dfs(int vis[],int node,vector<int> &ans,vector<int>adj[]){
             vis[node]=1;
             ans.push_back(node);
             for(auto it:adj[node]){
                 if(!vis[it])
                  dfs(vis,it,ans,adj);
             }
      }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        int start=0;
        vector<int> ans;
        dfs(vis,start,ans,adj);
        return ans;
    }
};


Time Complexity: For an undirected graph, O(N) + O(2E), For a directed graph, O(N) + O(E), Because for every node we are calling the recursive function once, the time taken is O(N) and 2E is for total degrees as we traverse for all adjacent nodes.

Space Complexity: O(3N) ~ O(N), Space for dfs stack space, visited array and an adjacency list.
