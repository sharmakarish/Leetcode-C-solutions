// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}

// } Driver Code Ends


//return the address of the string
char* reverse(char *str, int len)
{
   stack<char> s;
   for(int i=0; i<len;i++){
       char ch = str[i]; //string ke sare char ko stack me daal dia
       s.push(ch);
   }
   string ans = "";
for(int i=0;i<len;i++){
        str[i]=s.top(); //string me save krdia stack ka top 
        s.pop();   //for us top ko remove krdia
   }
   
   return str;
}