//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   void findCombination(int i,int n, int k,vector<vector<int>>& ans, vector<int>& ds){
    vector<int> candidates = {1,2,3,4,5,6,7,8,9};
     if(ds.size() == k){
         if(n == 0){
             ans.push_back(ds);  //store the solution and backtrack
         }
         return;
     }

     //pick element
   while(i < candidates.size() ){
 
     if(candidates[i] <= n){
         ds.push_back(candidates[i]);  //put 1 option into the combination
         findCombination(i+1, n -candidates[i] ,k,ans,ds);
         ds.pop_back();
            
   }  
        //  findCombination(i+1,n ,k,ans,ds);
        i++;
     }
//Not pick the element


    }

    vector<vector<int>> combinationSum(int K, int N) {
       vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0,N,K,ans,ds);
        return ans;   
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends