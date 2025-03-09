class Solution(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        prefixSum = 0
        count = 0
        prefixSumFrequency = {}
        prefixSumFrequency[0] = 1
        for num in nums:
            prefixSum += num
            if (prefixSum - k) in prefixSumFrequency:
                count += prefixSumFrequency[prefixSum - k]
            prefixSumFrequency[prefixSum] = prefixSumFrequency.get(prefixSum, 0) + 1
        return count
