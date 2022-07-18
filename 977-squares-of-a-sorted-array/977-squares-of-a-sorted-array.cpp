class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     
        int left = 0;
        int right = nums.size()-1;
        
        vector<int> v(nums.size(),0);
      
        for(int i = nums.size()-1; i >=0 ; i--)
        {
            if( abs(nums[left]) > nums[right] )
            {
                v[i] = nums[left]*nums[left];
                left++;
            }
            else{ 
                v[i] = nums[right]* nums[right];
                right--;
             }
        }
        return v;
    }
};