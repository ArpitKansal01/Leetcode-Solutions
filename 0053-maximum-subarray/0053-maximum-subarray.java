class Solution {
    public int maxSubArray(int[] nums) {
        int currSum=0,maxSum=nums[0];
        if(nums.length<2) return nums[0];
        for(int i:nums){
            currSum+=i;
            maxSum=Math.max(currSum,maxSum);
            if(currSum<0)   currSum=0;
        }
        return maxSum;
    }
}