class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int i;
        int ans = -1;
        int n = nums.size();
  
        for(i=0; i<n; i++ ){
            if( (i%10) == nums[i]){
                ans = i;
                break;
            }
        }
        return ans;
    }
};