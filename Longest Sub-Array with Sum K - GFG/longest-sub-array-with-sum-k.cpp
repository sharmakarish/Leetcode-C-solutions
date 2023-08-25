//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    int lenOfLongSubarr(int A[],  int n, int k) 
    {     //map to store the first index of any sum that's calculated

        unordered_map<int,int> mp;
        int max=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=A[i];

            //check if sum is equal to given target sum k
            //since this sum will be from 0 to i, we check
            //if i+1 ( the length of that subarray is 
            //greater than max)

            if(sum==k) { 
                if(i+1>max) 
                    max=i+1;
            }

            // sum(i,j)=sum(0,j)-sum(0,i), 
            //where sum(i,j) represents the sum of 
            //all the elements from index i to j-1.i<=j 
            //we check if sum(0,i) is present or not if it is,
            //then we take the subbarray length and check if its,
            //greater than max or not

            if(mp.find(sum-k)!=mp.end()) {
                int len=i-mp[sum-k];
                if(len>max) max=len;
            }

            /*here came a lot of confusion, first I just simply
            add first index of each sum to map (mp[sum]=i) but there came
            problem when we had element 0 as the sum before encountering 0
            is same as after encountering 0, so i put and if condition to check if
            arr[i]!=0 only then add index to map,but that also failed, beacause there 
            are negative numbers,so for eg if sum 5 happens at index 4 then due to -ve and +ve
            number it again sums at 5 at index 8 then i for that sum will be 8 instead of 4
            as we need the first occurence of sum because that will give us maximum length,so
            I put a if to check if the calculated sum is not in the map then only add index i to
            corresponding map,otherwise dont, the if can be removed in case of smallest or minimum
            subbarray length of with sum k*/
            
            if(mp.find(sum)==mp.end())
            mp[sum]=i;
        }
        return max;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends