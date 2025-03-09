class Solution(object):
    def check(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        nums2=nums[:]
        nums2.sort()
        print(nums)
        for i in range(len(nums)):
            if nums==nums2:
                return True
            else:
                val=nums.pop(0)
                nums.append(val)        
        return False