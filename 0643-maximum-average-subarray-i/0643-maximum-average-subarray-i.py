class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        maxAvg=float('-inf')
        left=0
        right=0
        subSum=0.0
        for i in range(0,len(nums)):
            right+=1
            subSum+=nums[i]
            if right==k:
                maxAvg=max(maxAvg,(subSum)/k)
                right-=1
                subSum-=nums[left]
                left+=1
        return maxAvg
        