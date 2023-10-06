//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

  int maxProfit(vector<int>& prices) {
            int n = prices.size();
            //three varying parameter ->i , buy , capacity so vector -> dp[i][buy][cap] => dp[n] * 2*3
            vector<vector<vector<int>>> dp(n+1, vector<vector<int>> (2, vector<int> (3,0)));
     
     // Base case: dp array is already initialized to 0, covering the base case.
     //rest cases

     for(int i = n-1; i>=0 ;i--){
        for(int buy = 0; buy<=1 ;buy++){
            for(int cap = 1; cap<=2 ;cap++){ //starting cap from 1 bco all cap = 0, are covered in base case0 
               
                if(buy == 1){ //you can buy 
                    dp[i][buy][cap] = max( -prices[i]+ dp[i+1][0][cap] , //buy kia tb bhi transac pura thodi hua buy-sell ka so cap remains same 
                                              0 + dp[i+1][1][cap] );  // not buy
                }
                else{  //can sell  buy == 0
                    dp[i][buy][cap] = max( prices[i]+ dp[i+1][1][cap-1], //sell kia -> transac       complete -> so cap-1
                                             0 + dp[i+1][0][cap]  );  // not sell ->transac not complete -> so cap remains     same 
                    }
           }
        }
     }
     
        return dp[0][1][2];//0->i , 1->buy ki initial value , 2->capacity ki va;

    }


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends