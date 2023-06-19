//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    
    bool ispossible(int A[],int N,int mid,int M)
    {
        int pagecount=0;
        int studentcount=1;
        
        for(int i=0;i<N;i++)
        {
            if(pagecount+A[i]<=mid)
            {
                pagecount+=A[i];
                
            }
            else                            //  incrementing the student count ;
            {
                studentcount++;
                if(studentcount>M || A[i]>mid)
                return false;
                pagecount=A[i];
                
            }
        }
        return true;
    }
    
    
    
    int findPages(int A[], int N, int M) 
    {
        // edge case 
        if(M>N)
        return -1;
        
        int s=0;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
        }
        
        int e=sum;
        int ans=-1;
        int mid=0;
        
        while(s<=e)
        {
              mid=s+(e-s)/2;
            if(ispossible(A,N,mid,M))
            {
                ans=mid;                    // storing the ans;
                 e=mid-1;                   // decreasing the end
            }
            else
            {
                s=mid+1;                    // incrementing the start
            }
          
        }
        
        
        return ans;
        
    }

};
    
    // alogrithm 
// take s=0 and end =sumofallpages 
// find mid 
// now cheak that this mid can be our solution or not 
// if this can be a solution then store it , and move end =mid-1,(cause greater value can be its  , solution but we have to find minimum)
// if not a solution then s=mid+1;
// run the loop till s<=e 

// is possible algorithm
// initialize the pagesum variable , and student count 
// run a loop through all its 
// cheak the pagesum is less then mid then include current arry pointer 
// if not then increament the next student
//  cheak the student is less then the given student size , and vaue of array is less then the mid size 
// is satisy then pagesum=0, now take the present arry sum in to it 
// else return false ;

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends