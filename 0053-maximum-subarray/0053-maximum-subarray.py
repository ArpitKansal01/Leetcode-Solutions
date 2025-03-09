class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        maxsum=nums[0]
        arrsum=0
        for i in range(0,len(nums)):
            arrsum+=nums[i]
            maxsum=max(maxsum,arrsum)
            if arrsum < 0:
                arrsum=0
        return maxsum