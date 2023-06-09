//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long> res;
        int dvd;
        int div ;
        if(A>=B){
            dvd   = A;  //divident  (jo divide hoga)
            div   = B;  //divisor ( jo divide krefa divident ko )
        }
         else{
            dvd = B;  //divident  (jo divide hoga)
            div = A;  //divisor ( jo divide krefa divident ko )
         }
         
      while(dvd % div != 0){  //by division method 
          int rem = dvd % div;
          dvd = div;   // divisor divident ban jaega(divisor divide hoga remainder se ) 
          div = rem ; //reminder divisior banega 
          
      }
      long long gcd = div;
      long long lcm = (A* B) / gcd ; 
      
      
      
     res.push_back(lcm); //this is lcm 
      res.push_back(gcd); //this is gcd 

return res;
        }
       
      
     
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends