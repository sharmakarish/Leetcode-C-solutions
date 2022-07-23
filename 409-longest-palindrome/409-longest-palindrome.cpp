class Solution {
public:
    int longestPalindrome(string s) {
       unordered_map<char , int> counts;
        for(char c: s){ 
        counts[c]++; // pushing string in map
        }
        int result = 0;
        bool odd_found = false;
        for(auto &pair: counts){ 
            if(pair.second % 2 == 0){ // uska second part  = count of string elements.
                result = result+ pair.second;
                  }
            else{
                odd_found = true;
                result = result+ pair.second -1;
            }
        }
        if(odd_found) {
            result++;//that means hum koi bhi ek odd ko leke ek pura odd palindrome bana denge
        }
        return result;
    }
};