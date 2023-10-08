//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:

int cutRod(int price[], int n) {

    //varying parameter => ind and n 
    vector<vector<int>> dp(n, vector<int> (n+1,0));
    
    //base case
    for(int j = 0; j<= n;j++){
        dp[0][j] = price[0]*j;
    }
    
    for(int ind = 1; ind<n ;ind++){
        for(int j = 0;j<= n;j++){
             int notpick = 0 +  dp[ind-1][j];
             int pick = INT_MIN;
             int rod = ind+1;
             if(rod <= j){  pick = price[ind] + dp[ind][j - rod];}
    
    dp[ind][j] = max(pick, notpick);
        }
    }
    return dp[n-1][n];
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends