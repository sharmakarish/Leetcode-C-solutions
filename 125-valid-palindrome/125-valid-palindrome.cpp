class Solution {
    private: 
       // to check whether all character are valid , kahi bich me koi invalid ? , ya kuch bhi to nhi h
    bool isvalidchar(char ch){
        if( (ch >= 'a' && ch <='z') ||(ch >= 'A' && ch <='Z') ||(ch >= '0' && ch <='9')){
            return 1; // true
        }
        //else 
        return 0; // false
    }
    //to change capital letter to small
    char toLowerCase(char ch){
         if( (ch >= 'a' && ch <='z') ||(ch >= '0' && ch <='9')){
            return ch; // no need to chnge
        }
        else{
             char temp = ch - 'A' + 'a'; // uppercase -> lowercase 
        return temp;
            } 
        
    }
    //to check puri string palindrome h ki nhi
    bool checkPalindrome(string a){
        int start = 0;
        int end = a.length()-1;
        
           while(start <= end) {
        if(a[start] != a[end]){
            return 0;       
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
    }
    
public:
//yha ps bas function calls honge implementation ke liye alg functions bna diye
    bool isPalindrome(string s) {
      
        //remove useless characters
        string temp ="";
        
         for(int j=0; j<s.length(); j++) {   //jo char valid hoga use temp string me push krega baki ko ignore
            if(isvalidchar(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
        //lowercase me kardo
        for(int j=0; j<temp.length(); j++) { 
            temp[j] = toLowerCase(temp[j]);
        }
        
        //check palindrome
        return checkPalindrome(temp);
    }
};