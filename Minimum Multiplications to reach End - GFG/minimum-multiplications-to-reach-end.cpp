//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
       int mod=1e5;  // Set a modulo value to ensure operations stay within bounds
queue<int>q;  // Initialize a queue for BFS traversal
int level=0;  // Initialize level counter for tracking depth of traversal
q.push(start%mod);  // Push the start node after applying modulo operation
int mp[100001]={0};  // Initialize an array to mark visited nodes

while(!q.empty()){  // Continue traversal until queue is empty
    
    int size=q.size();  // Get the current size of the queue
    
    for(int i=0;i<size;i++){  // Traverse through the nodes at the current level
        int x=q.front();  // Get the front element of the queue
        q.pop();  // Pop the front element
        
        if(x==end) return level;  // If the end node is reached, return the level
        
        for(auto &it:arr){  // Loop through adjacent nodes
            int y=(x*it)%mod;  // Calculate the new node value after the operation
            if(mp[y]==0){  // If the node hasn't been visited
                q.push((x*it)%mod);  // Push the new node to the queue
                mp[y]=1;  // Mark the node as visited
            }
        }
    }
    level++;  // Increment the level after traversing all nodes at the current level
}

return -1;  // Return -1 if end node is not reachable

    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends