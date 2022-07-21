class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for(int i = n-1; i>= 0; --i){
            if(digits[i] == 9){
                   digits[i] = 0;
            }
            else{ 
                   digits[i] =  digits[i]+1;
                   return digits;
                //break;
            }
        }
        
         //that means we have a carry and the digit is now 999+1 = 000 since we didnt store the carry
            digits.push_back(0);
            digits[0] = 1;    
        
        return digits;
    }
};
