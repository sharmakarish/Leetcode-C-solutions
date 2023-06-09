//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
	public:
    int gcd(int A, int B) 
	{  
	    int dvd,div;
	   if(A>=B){
	       dvd = A;
	       div = B;
	   	   }
	   else{
	   	       dvd = B;
	           div = A;
	   	   }
	   	   
	   while(dvd % div != 0){
	       int rem = dvd % div;
	       dvd = div;
	       div = rem;
	   }
	   return div;  
	} 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}
// } Driver Code Ends