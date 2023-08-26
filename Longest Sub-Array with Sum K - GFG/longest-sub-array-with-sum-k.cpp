//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
       map<int,int> mp;
       int sum = 0;
       int maxlen = 0;
       
       for(int i =0;i<n;i++){
           sum += a[i];
          
           if( sum == k){ //checking out for max length upto that i  
               maxlen = max(maxlen , i+1);
           }
           
           int rem = sum - k;  //sum of rest 
           //checking if remainign exists in map or not , if yes then add it in the map ,and update maximum 
           if(mp.find(rem) != mp.end()){
               int len = i - mp[rem]; //remaining wale ki index 
               maxlen = max(maxlen , len);
           }
          if(mp.find(sum) == mp.end()){ //that is ont present in the array
              mp[sum] = i; //exist kr rha h already to update mt kro , qk longest chahiye to sbse phle jo inde aai hum chahte h vo stores rhe 
          } 
       }
       return maxlen;
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