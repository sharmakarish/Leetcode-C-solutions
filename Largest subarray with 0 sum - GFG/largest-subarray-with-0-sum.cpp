//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/
 //bruteforce -> finding all subarrays taking theri sum , if sum == 0 , then comparing window size 
 
class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
    map<int,int> mp;
    int maxi = 0;
    int sum = 0;
    mp.insert({0,-1}); //so that if array me sirf 0 ho to vo window size 1 return krdega 
    
    for(int i = 0; i <n;i++){
        sum += a[i];
        if(mp.find(sum) != mp.end()){ //mapme present h 
            int len  = i - mp[sum]; //sum ka index 
            maxi = max(maxi, len);
        }
        else{
            mp.insert({sum,i});
        }
    }
    return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends