//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
       int maxi = 0;
       int maxRange = 0;
       int jumps = 0;
       
       for(int i = 0; i< n;i++){
           maxi = max(maxi, i + arr[i]);
           if(maxRange == i){
               maxRange = maxi;
               jumps++;
               if(maxRange >= n-1){
                   return jumps;
               }
           }
       }
       return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends