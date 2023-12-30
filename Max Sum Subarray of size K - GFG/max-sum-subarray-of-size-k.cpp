//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        long maxsum = INT_MIN, sum = 0;
        int i = 0 , j = 0;
        while(j < n){
            sum = sum + arr[j];
            if(j-i+1 < k){
                j++; //increase window size
            }
             else{  //j-i+1 >= k
               maxsum = max(maxsum,sum); 
               sum = sum - arr[i]; // remove 1st ele 
               i++;j++; //maintain window size
            }
        }
 
        return maxsum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends