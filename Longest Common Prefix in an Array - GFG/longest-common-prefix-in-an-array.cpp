//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string strs[], int N)
    {
         string ans ="";
        // for traversing 1st string of vector
        for(int i =0;i<strs[0].length();i++){
            char ch = strs[0][i];
            bool match = true;
            // for comparing ch with rest of the string 
            for(int j =1;j<N;j++){
                // not match
                if(ch != strs[j][i]){
                    match = false;
                    break;
                }
                //or match h to bas aage wali string ka hbi char check kro loop se bhar ajao sari string hojae tb
                }
                if(match == false){ break;}
                else{
                    ans.push_back(ch);
                }

        }
        if(ans ==""){ans = "-1";}
return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends