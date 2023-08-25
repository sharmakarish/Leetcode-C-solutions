//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	   int n = txt.length(); //length of txt
	   int k = pat.length(); //windpw size
	    // variable to store count of the occurences of anagrams of word in the text
        int ans = 0; 
        
        //storing freq of char in string : pat
        vector<int> hashpat(26,0);
        
        for(int i =0;i<k;i++){
            hashpat[pat[i]-'a']++;
        }
        // storing frequency of characters in string : txt
            vector<int>hashTxt(26,0);
            
        int i = 0 , j = 0; // start of window and end of window
        
        while(j < n){
            hashTxt[txt[j]-'a']++; //decrementing freq of that char from txt map 
           
            if(j-i+1 ==k){ //condition on hitting window size
                if(hashTxt == hashpat) //freq of  char matched 
                ans++;
                
               hashTxt[txt[i] - 'a']--; // to maintain the size of window
               i++;
            }
            //when j < k so increment j
            j++;
        }
        return ans;
	}

};
          

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends