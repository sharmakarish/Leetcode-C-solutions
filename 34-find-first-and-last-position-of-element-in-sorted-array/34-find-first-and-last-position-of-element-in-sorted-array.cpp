//optimized solution with binar search 
class Solution {
public:
    int first_occurence( vector<int>& nums, int target){
        int start =0, end = nums.size()-1;
        int mid = start + (end -start)/2;
        int ans = -1;
        
        while(start<=end){
            if(nums[mid] == target){
                ans = mid;
                end =mid-1;
            }
            else if(target> nums[mid]){ // traverse right
                start = mid+1 ;
            }
              else if(target < nums[mid]){ // traverse left
                 end = mid-1 ;
            }
            mid = start + (end -start)/2;
        }
        return ans;
    }
      int last_occurence( vector<int>& nums, int target){
        int start =0, end = nums.size()-1;
        int mid = start + (end -start)/2;
        int ans = -1;
        while(start<=end){
            if(nums[mid] == target){
                ans = mid;
                start =mid+1;
            }
            else if(target > nums[mid]){ // traverse right
                start = mid+1 ;
            }
              else if(target < nums[mid]){ // traverse right
                 end = mid-1 ;
            }
            mid = start + (end -start)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> occurence;
        occurence.push_back(first_occurence(nums,target));
        occurence.push_back(last_occurence(nums,target));
        
        return occurence;
}
};