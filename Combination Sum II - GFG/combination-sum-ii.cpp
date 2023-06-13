//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  
    void findCombination(int i,int target,vector<int>& candidates,vector<vector<int>>& ans, vector<int>& ds){

     if(i == candidates.size()){
         if(target == 0){
             ans.push_back(ds);  //store the solution and backtrack
         }
         return;
     }

     //pick element
     if(candidates[i] <= target){
         ds.push_back(candidates[i]);  //put 1 option into the combination
         findCombination(i+1,target - candidates[i] ,candidates,ans,ds);
         ds.pop_back();
           while(i+1<candidates.size() && candidates[i]==candidates[i+1]){
            i++;
        }
     }
//Not pick the element
         findCombination(i+1,target ,candidates,ans,ds);


    }


    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
         vector<vector<int>> ans;
        vector<int> ds;
         sort(candidates.begin(),candidates.end());
        findCombination(0,target,candidates,ans,ds);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends