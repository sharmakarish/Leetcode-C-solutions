//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
     unordered_map<char, int> mp;
  int max_len = 0;
  int i = 0, j = 0;
  int k;

  while (j < s.size()) {
    ++mp[s[j]];
    k = (j - i + 1);  //window size 

    if (mp.size() == k) {
      max_len = max(max_len, k);
    } else {
      while (mp.size() < k) {
        char ch = s[i];
        --mp[ch]; //removing char from map 
        if (mp[ch] == 0) mp.erase(ch);
        i++;
        k--;  // increasing i meaning window size is shrinked.
      }
    //   if (mp.size() == k) {
    //     max_len = max(max_len, k);
    //   }
    }
    j++;
  }
  return max_len;
}