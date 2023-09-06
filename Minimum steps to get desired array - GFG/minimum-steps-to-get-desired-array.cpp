//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution {
public:
    int countMinOperations(int arr[], int n) {
       
    // Initialize result (Count of minimum moves)
    int result = 0;
 
    // Keep looping while all elements of arr
    // don't become 0.
    while (1) //writing here 1 denotes no specific condition to break out untill told in loop
    {
        // To store count of zeroes in current
        // arr array
        int zero_count = 0;
 
        int i;  // To find first odd element
        for (i=0; i<n; i++)
        {
            // If odd number found
            if (arr[i] & 1)
                break;
 
            // If 0, then increment zero_count
            else if (arr[i] == 0)
                zero_count++;
        }
 
        // All numbers are 0
        if (zero_count == n)
          return result;
 
        // All numbers are even
        if (i == n)
        {
            // Divide the whole array by 2
            // and increment result
            for (int j=0; j<n; j++)
               arr[j] = arr[j]/2;
            result++;
        }
 
        // Make all odd numbers even by subtracting
        // one and increment result.
        for (int j=i; j<n; j++)
        {
           if (arr[j] & 1)
           {
              arr[j]--;
              result++;
           }
        }
    }
    return result;
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
        auto ans = ob.countMinOperations(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends