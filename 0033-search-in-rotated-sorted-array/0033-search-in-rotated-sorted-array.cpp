class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1,mid=0;
        while(left<=right){
            mid=left+((right-left)/2);
            if (nums[mid]==target)
                return mid;
            else if (nums[mid]>=nums[0]){
                if(nums[0]<=target && target<nums[mid])
                    right=mid-1;
                else
                    left=mid+1;
            }
            else{
                if (nums[mid]<target && target<=nums[right])
                    left=mid+1;
                else
                    right=mid-1;
            
            }
        }
        return -1;
    }
};