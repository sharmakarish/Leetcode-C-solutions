// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
// #include<stack>
class Solution
{
    public:
     void solve(stack<int>&s,int count, int size){
         //base case
         if(count == size/2){
             s.pop();
             return ;
         }
         int num = s.top();
         s.pop();
         //recursive call 
         solve(s,count+1,size);
         
         s.push(num);
     }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int size)
    {
    int count =0;
    solve(s,count,size);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends