//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
		
	 int first_occurence(int arr[],int n, int x){
        int start =0, end = n -1;
        int mid = start + (end -start)/2;
        int ans = -1;
        
        while(start<=end){
            if(arr[mid] == x){
                ans = mid;
                end =mid-1;
            }
            else if(x> arr[mid]){ // traverse right
                start = mid+1 ;
            }
              else if(x < arr[mid]){ // traverse left
                 end = mid-1 ;
            }
            mid = start + (end -start)/2;
        }
        return ans;
    }
      int last_occurence(int arr[],int n, int x){
        int start =0, end = n -1;
        int mid = start + (end -start)/2;
        int ans = -1;
        while(start<=end){
            if(arr[mid] == x){
                ans = mid;
                start =mid+1;
            }
            else if(x > arr[mid]){ // traverse right
                start = mid+1 ;
            }
              else if(x < arr[mid]){ // traverse right
                 end = mid-1 ;
            }
            mid = start + (end -start)/2;
        }
        return ans;
    }
    
	int count(int arr[], int n, int x) {

        int fo = (first_occurence(arr,n,x));
        int lo = (last_occurence(arr,n,x));
        
        
        if(fo == -1 || lo == -1)
    {
        return 0;
    }
    int ans = lo - fo + 1;
    return ans;
}



};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends