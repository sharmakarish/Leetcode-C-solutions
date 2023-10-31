//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

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
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends

    int getfloor(int arr[], int n, int x){  
        int low = 0; int high = n-1;
        int ans = -1; //if not found return -1
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] <= x){
                ans = arr[mid];
                low = mid + 1;
            }
            else{
                 high = mid - 1;
            }
        }
        return ans;
    }
    
    int getceil(int arr[], int n, int x){ //ceil is basically lowerbound 
        int low = 0; int high = n-1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] >= x){
                ans = arr[mid];
                high = mid - 1;
            }
            else{
                 low = mid + 1;
            }
        }
        return ans;
    }

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr,arr+n);
    int f = getfloor(arr,n,x);
    int c  = getceil(arr,n,x); 
    pair<int,int> res;
    res.first = f;
    res.second = c;
    return res;
}