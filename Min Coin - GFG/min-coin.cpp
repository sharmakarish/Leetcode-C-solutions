//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	  int f(int ind, int amount,vector<int>& nums, vector<vector<int>> &dp){
        //base case : it is always seen wrt a single element 
        if(ind == 0){
            if(amount % nums[0] == 0){// amountki kisi bhi value [e tbhi possible hoga jb ye cond hogi ]
                return amount/nums[0];
            }
            else
            return 1e9;
        }

        if(dp[ind][amount] != -1){
            return dp[ind][amount];
        }


        //rest cases

        int nottake = 0 + f(ind-1, amount,nums,dp);
        int take = 1e9;

        if(nums[ind] <= amount){
            take = 1 + f(ind, amount - nums[ind],nums,dp);
        }
        return dp[ind][amount] = min(take,nottake);
    }
	int MinCoin(vector<int>nums, int amount)
	{
	     int n = nums.size();
        
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));

        int ans = f(n-1,amount,nums,dp);
        if(ans >= 1e9) return -1;
        else
        return ans;

	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends