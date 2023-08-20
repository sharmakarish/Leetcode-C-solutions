//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
         //base case:
      if(n == 1) return "1";
      if(n == 2) return "11";
      string s = "11";
      //for further

      for(int i = 3; i <= n ;i++){
        string t = "";
        s = s + '&'; //adding delimiter jisse last tk traverse kr pae 
        int c = 1; //count
        for(int j = 1; j < s.length() ;j++){
            if(s[j] != s[j-1]){ //concecutive same ni h to hand to hand ans me store kia jitna h 
                t = t + to_string(c); //concatenating freq first
                t = t + s[j-1];
                c = 1;
            }
            else c++;
        }
        s = t;
      }
      return s;
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends