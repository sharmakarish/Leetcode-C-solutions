//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
// node: An integer representing the node for which we want to check the safety of assigning a color.
// color: An array of integers representing the assigned color for each node in the graph.
//  col: An integer representing the color we want to check the safety of assigning to the given node.
 
  bool isSafe(int node, int color[], bool graph[101][101], int n, int col) {
  for (int k = 0; k < n; k++) {
    if (k != node && graph[k][node] == 1 && color[k] == col) {
      return false;
    }
  }
  return true;
}
// k != node => to avoid comparing the node with itself
// graph[k][node] == 1  is checking if there exists an edge between node k and the given node.


bool solve(int node, int color[], int m, int N, bool graph[101][101]) {
    //base case 
  if (node == N) {
    return true;
  }

  for (int i = 1; i <= m; i++) {         //traversing all the color in color array
    if (isSafe(node, color, graph, N, i)) {
      color[node] = i;  //assigning color to node
      if (solve(node + 1, color, m, N, graph)) return true;
      color[node] = 0;  //backtracking 
    }

  }
  return false;      //if it's not possible to color with any color we return false 
}

//Function to determine if graph can be coloured with at most M colours such
//that no two adjacent vertices of graph are coloured with same colour.
bool graphColoring(bool graph[101][101], int m, int N) {
  
  int color[N] = {0};  //initializing color array with 0
  if (solve(0, color, m, N, graph)) return true;
  return false;
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends