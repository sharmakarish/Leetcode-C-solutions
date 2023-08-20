//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
       int n=s.length();
    if(s.length()%2!=0){
        return -1;
    }
    int open =0;
    int close=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='}' ){
            if(open>0){
                open--;
            }else{
                open++;
                cnt++;
            }
        }
        if(s[i]=='{'){
            open++;
        }
    }
    return cnt+open/2;
}