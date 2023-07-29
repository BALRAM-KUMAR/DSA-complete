
There are two types of data structures

Linear :- array , linklist etc
Non – linear :- tree , graph

  degree of the graph:- 2 * no of edge
  indegree and outdegree


Graph representation :- 
  1. matrix 
  2. List

  1. Matrix (if no of vertices n)
     adj[n+1][n+1]
     
int main()
{ 
  int n , m;
  int adj[n+1][n+1];
//n=no of vertices 
//m= no of edge
  cin>>n>>m;
    for(int i=0;i<m;i++){
         int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
  }
return 0;
}
  time = O(m)
  space=O(n*n)


   2. List in c++
    
int main()
{ 
  int n , m;
  int vector<int> adj[n+1];
//n=no of vertices 
//m= no of edge
  cin>>n>>m;
    for(int i=0;i<m;i++){
         int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
  }
return 0;
}

time = O(m)
space = O(2E) for undirected graph
space = O(E) for directed


******************************How to store weighted edge*********************************
1. Matrix :- instead o assigning 1 .. assign its weight
   adj[u][v] = weight;

2. List :- Make the pair in vector
     vector<pair<int,int>> adjList[n+1]
  example :- node(4) -> { (2,1) , (3,4)....)
              vert   -> (edge(4-2) , weight)
















