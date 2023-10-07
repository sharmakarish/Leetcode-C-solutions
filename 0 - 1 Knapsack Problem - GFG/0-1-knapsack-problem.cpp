//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//TABULATION 

class Solution
{
    public:
    //Function to return max val that can be put in knapsack of capacity W.
    

    
    int knapSack(int w, int wt[], int val[], int n) 
    {  // Create a 2D vector to store the dynamic programming table
        vector<vector<int>> dp(n, vector<int>(w + 1, 0));
        
        // Initialize the first row (base case)
        for(int k = wt[0]; k <= w; k++) {
            dp[0][k] = val[0];
        }
    
        // Populate the dynamic programming table
        for(int ind = 1; ind < n; ind++) {
            for(int weight = 0; weight <= w; weight++) {
                int nottake = dp[ind-1][weight];
                int take = (wt[ind] <= weight) ? val[ind] + dp[ind-1][weight - wt[ind]] : INT_MIN;
                dp[ind][weight] = max(take, nottake);
            }
        }
        
        return dp[n-1][w];
    }
};



//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends