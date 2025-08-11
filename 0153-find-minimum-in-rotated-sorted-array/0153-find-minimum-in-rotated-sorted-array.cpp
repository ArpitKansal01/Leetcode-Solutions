class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0,right=nums.size()-1,small=nums[0];
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]>=nums[0])    left=mid+1;
            else{
                small = nums[mid];
                right = mid-1;
            }
        }
        return small;
    }
};