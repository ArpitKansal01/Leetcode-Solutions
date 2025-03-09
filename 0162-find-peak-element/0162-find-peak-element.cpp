class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size()<2)
            return 0;
        int left=0,right=nums.size()-1,mid=0;
        while(left<right){
            mid=left+((right-left)/2);
            if (nums[mid]>nums[mid+1])
                right=mid;
            else
                left=mid+1;            
        }
        return left;
    }
};