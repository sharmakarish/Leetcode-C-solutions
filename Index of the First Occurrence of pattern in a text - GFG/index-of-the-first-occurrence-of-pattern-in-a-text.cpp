//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMatching(string h, string n) {
              if(n.size() > h.size()){return -1;}

        int j = 0;
        for(int i = 0; i<h.size()-n.size()+1;i++){
           //checking for 1st char to be same
            if(h[i] == n[j]){

                int l = i;
          //checking for substring of length of needle
                while(j< n.size() && h[l] == n[j]){
                    l++;
                    j++;
                }
                if(j == n.size()){
                    return i;
                }
            }
            //if in btw condition breaks
            j = 0;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string text, pat;
        cin >> text >> pat;
        Solution obj;
        cout << obj.findMatching(text, pat) << endl;
    }
    return 0;
}
// } Driver Code Ends