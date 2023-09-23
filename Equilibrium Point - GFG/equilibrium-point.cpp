//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
long long pre[n];
long long suffixSum[n];
        
//Calculating prefix sum *******

        pre[0] = a[0];
        for(int i = 1; i < n; i++) {
            pre[i] = pre[i-1] + a[i];
        }
        
//Calculating suffix sum *******

        suffixSum[n-1] = a[n-1];
        for(int i = n-2; i >= 0; i--) {
            suffixSum[i] = suffixSum[i+1] + a[i];
        }
        
        int index = -1;
        for(int i = 0; i < n; i++) {
            if(pre[i] == suffixSum[i]) {
                index = i + 1; // Equilibrium point is at index (i+1)
                break;
            }
        }
        
        return index;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends