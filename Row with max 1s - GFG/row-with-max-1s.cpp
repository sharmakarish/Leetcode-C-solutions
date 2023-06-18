//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int count = 0;
	    int max_count = INT_MIN;
	    int index = -1;
	    for(int i =0;i<n;i++){
	        for(int j =0; j<m;j++){
	            if(arr[i][j] == 1){
	                count++;
	            }
	        }
	        if(count > max_count){
	            max_count = count;
	            index = i;
	        }
	        count = 0;
	}
	if(max_count == 0){
	    return -1;
	}
	else
	return index;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends