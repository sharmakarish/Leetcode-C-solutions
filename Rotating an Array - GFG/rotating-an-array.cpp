//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
       //if d can be divisible by n then rotation repeat , obtained arr become same.Rotaion repeat occurs when say n no of elm is rotated n or multiple of n times
	   // 1 elm is already rotated

	   if(d%n==0 || n==1)
	      return;
	   d=d%n;     // rotate excluding till that d which will result/give same arr again 
	   reverse(arr,arr+n);    // reverse whole arr
	   reverse(arr,arr+(n-d-1)+1);     //reverse from start to n-d-1 ,i.e reverse first part
	   reverse(arr+(n-d),arr+n);     //reverse n-d to end ,i.e reverse the second path
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends