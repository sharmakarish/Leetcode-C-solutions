//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int num){
         int count = 0;
        int i = num;
         while(i > 0  ){
                 int rem = i%10;
                    if(rem != 0 && num%rem == 0){
                          count++;
         }
                 i = i/10;
    }
    return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends