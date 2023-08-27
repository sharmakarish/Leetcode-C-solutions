//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int n, vector<int> &fruits) {
          int ans = 0;
        map<int,int> mp;
        int i = 0, j = 0;
        while(j<n){
            mp[fruits[j]]++;
            
            while(mp.size() > 2) {
                mp[fruits[i]]--;
                if(mp[fruits[i]] == 0) {
                    mp.erase(fruits[i]);
                }
                i++;
            }
            //The maximum count of fruits in the basket might exceed when mp.size() is less than 2.
            // (so iski vjh se alag se if condition ni lagi when mp size == 2)
            ans = max(ans, j - i + 1);  
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends