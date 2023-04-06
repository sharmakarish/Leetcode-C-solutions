//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int equalSum(int n, vector<int> &arr) {
       vector<int> left;
   vector<int> right;
  int ans = -1;
  int left_sum = 0,right_sum = 0;
  
  //for storing left sum 
  left.push_back(0);
  for(int i = 1;i<n;i++){
      left_sum += arr[i-1];
      left.push_back(left_sum);
  }

  //for storing right sum 
right.push_back(0);
  for(int i = n-2;i>=0;i--){
       right_sum += arr[i+1];
      right.push_back(right_sum);
  }
  
  
  
 
  reverse(right.begin(),right.end());
   for(int i = 0;i<n;i++){
    if(left[i] == right[i]){
        ans = i+1;
    }
   }
   return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends