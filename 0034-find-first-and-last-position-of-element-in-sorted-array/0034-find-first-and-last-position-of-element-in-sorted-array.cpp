class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1,mid=0;
        vector<int> range={-1,-1};
        while(left<=right){
            mid=left+((right-left)/2);
            if(nums[mid]==target)
                right=mid-1;
            else if(nums[mid]>target)
                right=mid-1;
            else
                left=mid+1;
        }
         if(left<nums.size() && nums[left]==target)
             range[0]=left;
        left=0,right=nums.size()-1,mid=0;
        while(left<=right){
            mid=left+((right-left)/2);
            if(nums[mid]==target)
                left=mid+1;
            else if(nums[mid]>target)
                right=mid-1;
            else
                left=mid+1;
        }
         if(right>= 0 && nums[right]==target)
             range[1]=right;
        return range;
        }
};