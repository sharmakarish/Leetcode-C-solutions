//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int arr[26] = {0}; //count array whose index are alphabets a= 0, b =1...
        // create an array of count of chracters
        
        for(int i = 0;i<str.length();i++){
            char ch = str[i];
            int num = 0;
            num = ch-'a';
            arr[num]++;
        }
        // find max occ char
        int maxi = -1, ans = 0;
        for(int i = 0;i<26;i++){
            if(maxi <arr[i]){
                ans = i;
                maxi = arr[i];
            }
        }
        
        
        return 'a'+ans;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends