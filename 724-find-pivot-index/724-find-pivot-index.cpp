class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        int left_sum = 0;
        int pivot;
        
        for(int i=0;i<nums.size();i++){
                total_sum += nums[i]; //sum of all elements
        }
        
        int right_sum = total_sum - nums[0]; 
        
        for(int i=0;i<nums.size();i++){
            
            if( right_sum == left_sum){
                return i;
            }
           if(i<nums.size()-1){ 
                right_sum = right_sum - nums[i+1];
                left_sum =left_sum + nums[i];
           }
                   }
        return -1;
    }
};
