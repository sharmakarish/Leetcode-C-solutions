//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        
        // Calculate the expected sum of first n natural numbers
        int expectedSum = n*(n+1)/2;
        
        // Calculate the actual sum of elements in the array
        int actualSum = 0;
        for(int i = 0; i < array.size(); i++){
            actualSum += array[i];
        }
        
        // The missing number is the difference between the expected and actual sums
        int missingNumber = expectedSum - actualSum;
        return missingNumber;
        
    }
    
};




//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends