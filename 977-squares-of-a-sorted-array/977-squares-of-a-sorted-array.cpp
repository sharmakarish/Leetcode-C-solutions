class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        for(int i = 0; i<nums.size();i++){
            nums[i] = nums[i] * nums[i];
            v.push_back(nums[i]);
        }
         sort(v.begin(), v.end());
        return v;
    }
};