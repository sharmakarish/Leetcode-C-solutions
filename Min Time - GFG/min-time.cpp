//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    long long solve(vector<int> &fruitType, int index, int currPosition, 
                    unordered_map<int, int> &maxLoc, unordered_map<int, int> &minLoc,
                    vector<vector<long long>> &dp, int indication) {
        
        // Base case: If we have processed all fruit types, return 0.
        if (index == fruitType.size()) return 0;
        
        // If the subproblem has already been solved, return the precomputed value.
        if (dp[index][indication] != -1) {
            return dp[index][indication];
        }
        
        long long option1 = 0;  // Option 1: Move left then right
        long long option2 = 0;  // Option 2: Move right then left
        
        int left = minLoc[fruitType[index]];   // Minimum location of the current fruit type
        int right = maxLoc[fruitType[index]];  // Maximum location of the current fruit type
        
        // Option 1: Move left then right
        option1 = abs(currPosition - left) + abs(left - right) +
                  solve(fruitType, index + 1, right, minLoc, maxLoc, dp, 1);
        
        // If it is the last fruit type, add the distance to return to the starting position (0).
        if (index == fruitType.size() - 1) {
            option1 += abs(right);
        }
        
        // Option 2: Move right then left
        option2 = abs(currPosition - right) + abs(right - left) +
                  solve(fruitType, index + 1, left, minLoc, maxLoc, dp, 0);
        
        // If it is the last fruit type, add the distance to return to the starting position (0).
        if (index == fruitType.size() - 1) {
            option2 += abs(left);
        }
        
        // Return the minimum of the two options and store it in the DP table.
        return dp[index][indication] = min(option1, option2);
    }
  
    long long minTime(int n, vector<int> &locations, vector<int> &types) {
        int maxi = *max_element(types.begin(), types.end());  // Finding the maximum type of fruit
        
        unordered_map<int, int> maxLoc;  // Stores the maximum location for each fruit type
        unordered_map<int, int> minLoc;  // Stores the minimum location for each fruit type
        
        vector<int> tempFruitTypes(maxi + 1, 0);  // Array to store all the types of fruits
        
        for (int i = 0; i < n; i++) {
            tempFruitTypes[types[i]] = 1;  // Mark the occurrence of the current fruit type
            
            if (maxLoc.find(types[i]) == maxLoc.end()) {
                // If it's the first occurrence of the current fruit type, update minLoc and maxLoc.
                minLoc[types[i]] = locations[i];
                maxLoc[types[i]] = locations[i];
            } else {
                // Update minLoc and maxLoc if necessary.
                minLoc[types[i]] = min(minLoc[types[i]], locations[i]);
                maxLoc[types[i]] = max(maxLoc[types[i]], locations[i]);
            }
        }
        
        vector<int> fruitType;
        
        // Populate the fruitType array with the types of fruits present.
        for (int i = 0; i <= maxi; i++) {
            if (tempFruitTypes[i] == 1) {
                fruitType.push_back(i);
            }
        }
        
        int index = 0;
        int currPosition = 0;
        int indication = 0;  // Indicates which side to move (0->left, 1->right)
        
        vector<vector<long long>> dp(fruitType.size() + 1, vector<long long>(2, -1));
        
        // Call the solve function to find the minimum time.
        return solve(fruitType, index, currPosition, minLoc, maxLoc, dp, indication);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> locations(n);
        for(int i=0;i<n;i++){
            cin>>locations[i];
        }
        
        
        vector<int> types(n);
        for(int i=0;i<n;i++){
            cin>>types[i];
        }
        
        Solution obj;
        long long res = obj.minTime(n, locations, types);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends