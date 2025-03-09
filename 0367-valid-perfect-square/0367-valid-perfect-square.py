class Solution(object):
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num<2:
            return True
        left=1
        right=num//2
        while(left<=right):
            mid=left+((right-left)//2)
            if(mid*mid==num):
                return True
            elif mid*mid>num:
                right=mid-1
            else:
                left=mid+1
        return False