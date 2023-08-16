//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

        // ===============DP Approach ===============

class Solution
{
    public:
    const int MOD = 1000000007;
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {if (n <= 1) {
        return 1;
    }

    int catalan[n + 1];
    catalan[0] = catalan[1] = 1;

    for (int i = 2; i <= n; ++i) {
        catalan[i] = 0;
        for (int j = 0; j < i; ++j) {
            catalan[i] = (catalan[i] + (catalan[j] * 1LL * catalan[i - j - 1]) % MOD) % MOD;
        }
    }

    return catalan[n];
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends