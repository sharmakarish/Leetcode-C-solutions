//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
//       Observe properly, you will find that all the numbers in total appear (N/i) times.

// Like in 4

// 1s = 4/1 = 4 times  ==> 1x4 = 4

// 2s = 4/2 = 2times   ==> 2x2 = 4

// 3s = 4/3 = 1 times  ==> 3x1 = 3

// 4s = 4/4 = 1 times  ==> 4x1 = 4

// Total sum = 4+4+3+4 = 15 (Ans)

        long long ans = 0 ;
        for(int i = 1 ; i <= N ; i++){
            ans  = ans + i * ( N / i );
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends