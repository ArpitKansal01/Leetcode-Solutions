class Solution(object):
    def removeDuplicates(self, nums):
        l1=[]
        for i in nums:
            if nums.count(i)>1:
                l1.append(i)
                for j in range(nums.count(i)-1):
                    nums.remove(i)
        k=len(nums)
        nums.extend(l1)
        return k