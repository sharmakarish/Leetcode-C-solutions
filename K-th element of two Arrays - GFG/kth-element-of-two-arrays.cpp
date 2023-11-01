//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int> res;
        for(int i = 0; i < n; i++){
            res.push_back(arr1[i]);
        }
         for(int i = 0; i < m; i++){
            res.push_back(arr2[i]);
        }
        sort(res.begin(), res.end());
        int ans = 0;
        for(int i = 0; i < res.size(); i ++){
            if(i == k-1){
                ans = res[i];
                break;
        }
        }
        return ans;
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends