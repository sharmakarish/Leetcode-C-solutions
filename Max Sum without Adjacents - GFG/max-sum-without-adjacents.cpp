//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *nums, int n) {
	    
      int prev = nums[0];
      int prev2 = 0;

      for(int i =1;i <n;i++){
        int take = nums[i];
        if(i >1 ) take += prev2 ; //taking alternate element

        int nottake = prev;

        int curri = max(take,nottake);
        prev2 = prev;
        prev = curri;
      }  

      return prev;
    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends