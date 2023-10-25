//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      
        if(n <=1){
            return n;
        }
        priority_queue<int> pq;
      for(int i = 0; i < n;i++){
          pq.push(arr[i]);
      }
      
      int len = 1;
      int maxi = 1;
      
      while(!pq.empty()){
          int prev = pq.top();
          pq.pop();
          if(abs(prev - pq.top()) == 1){ //means consecutive 
                len++;
                maxi = max(maxi,len);
          }
          else if(abs(prev - pq.top()) == 0){
              continue;
          }
          else if (!pq.empty()) {
                len = 1; // Reset len only if pq is not empty
            }
      }
      return maxi;
    
    }
};




//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends