//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
  bool ispossible(int arr[],long long n,long long k,long long mid)
  {
      long long  paintercount=1;
      long long  timesum=0;
      
        for(int i=0;i<n;i++)
        {
            if(timesum+arr[i]<=mid)
            {
                timesum+=arr[i];
            }
            else
            {
                paintercount++;
                if(paintercount>k || arr[i]>mid)
                return false;
                
                
                timesum=arr[i];
            }
        }
    return true;
  }
  
  
  
  
    long long minTime(int arr[], int n, int k)
    {
      long long  s=0;
      long long  sum=0;
      
                // edge case 
      
      for(int i=0;i<n;i++)
      {
          sum+=arr[i];
      }
      
      long long e=sum;                      
      long long  ans=-1;
      long long  mid=s+(e-s)/2;
      
      while(s<=e)
      {
          if(ispossible(arr,n,k,mid))
          {
              ans=mid;                          // storing the ans 
              e=mid-1;                          // decresing the search space ,, to the minimum possible 
          }
          else
          {
              s=mid+1;
          }
          mid=s+(e-s)/2;
      }
      return ans;
    }
    
};

 

// algorithm -  same as book allocation 

// search space , s=0,e= sum of the total 
// now finding the mid element and compare with the  current sum if isit less then go in next 
// itration
// if not then go to the next painter,(just increment the painter varialbe)
//     here cheak two things 
//     1. no of painter less then the given  and ,, the arr[i] < mid value 
//     if true then make progress sum =0 ,and start from the current position 
//     else 
//     return false 

// every time get a ans, that means you have to make e=mid-1  and store the ans  (we want minimum ans)
// if not get the ans then we have to make s=mid+1;

// at last return the ans ;


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends