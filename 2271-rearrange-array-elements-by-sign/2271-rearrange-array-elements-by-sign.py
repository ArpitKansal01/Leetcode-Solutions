class Solution(object):
    def rearrangeArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        l1=[]
        '''l2=[]
        l3=[]
        for i in nums:
            if i > 0:
                l1.append(i)
            else:
                l2.append(i)
        for i in range(0,len(l1)):
            l3.append(l1[i])
            for j in range(i,len(l2)):
                l3.append(l2[j])
                break
        return l3'''
        for i in nums:
            if i < 0 :
                l1.append(i)
        n=0
        print(l1)
        print(nums)
        for i in nums:
          if i >0:  
            l1.insert(n,i)
            n+=2
        return l1