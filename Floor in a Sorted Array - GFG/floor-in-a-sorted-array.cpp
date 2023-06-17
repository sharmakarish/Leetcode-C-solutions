//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        int s =0 ;
        int e = n-1;
        int mid = s + (e-s)/2;
        int res = -1;
        while(s<=e){
            
            if(v[mid] == x){
                return mid;
            }
             
            if(v[mid] < x){ //move right
                res = mid;          //  (ex . 0 1 4 6 7  8  here mid = 4
                s = mid+1;            //to possiblity h na yhi res ho iske bad wala element x se bada hogya to islye store kra
            }
            else if(v[mid] > x){ //move left
                e = mid-1;       //store ni kia qk . ex . 0 1 6 7 8  9 
                                  //6 bada h 5 se to stoe krke bhi kya mtlb 
            }
            mid = s + (e-s)/2;
        }
        return res;
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends