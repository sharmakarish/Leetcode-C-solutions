//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<int> s;
        for(int i=0;i<x.length();i++){
            if(x[i] == '{' || x[i] == '('|| x[i] == '['){
                s.push(x[i]);
            }
            else{
                //closing bracket ki bat ai to humne check kia cllsing and openeing 
                if(!s.empty()){
                    char top = s.top();
                    if(x[i] == '}' && top == '{' 
                       || x[i] == ')' && top == '(' 
                       || x[i] == ']' && top == '[' ){
                        s.pop();
                    }
                   else{ //upr wale symbol ke alawa kuch bhi hua means ba,anced ni h
                       return false;
                   }
                }
                else{ //stack me kbhi kuchinput hua hi ni empty h 
                    return false;
                }
            }
        }
        if(s.empty()){
            return true;
        }
        else{
            return false;
        }
    }
    

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends