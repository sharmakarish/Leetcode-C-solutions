//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int A[], int n, int X)
    {
       sort(A, A + n);//I am going to use Two pointer for that i'm sorting it if you want to use some other approch feel free to do that;
      
        int sum=A[0]+A[1]+A[2];//Our Intial sum or assuption that intial three values are the closet sum
        for(int i=0;i<n-2;i++){ //n-2 Since we have taken n-1 in our point so no need to go beyond that
            //Implementing Two pointer technique
            int j=i+1;
            int k=n-1;
            while(j<k){
                int temp=A[i]+A[j]+A[k];//Temparory sum for comaprison
                if(abs(temp-X) < abs(sum-X) ) sum=temp;//if we find batter or closer sum then we update the above sum value
                if(temp>X){
                    k--;                  // if value is greater than target one just come one point right to left
                } else if(temp<X){
                    j++;             //if value is lower than tsrget just come one point left to right 
                    
                }else return X;// if value already found no need to go for other just return 
            }
            
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends