class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
  vector<int> ans;
  int s=0;
  int e= nums.size()-1;
  int ans_s =0,ans_e=0;
        for(int i=0;i<nums.size();i++){ 
if(nums[s]+ nums[e] == target){
ans_s = s;
ans_e= e;
}
  if(nums[s]+ nums[e] > target ){
  e--;
}
  if(nums[s]+ nums[e] < target ){
  s++;
}
        }
ans.push_back(ans_s+1);
ans.push_back(ans_e+1);
return ans;
}
   
};