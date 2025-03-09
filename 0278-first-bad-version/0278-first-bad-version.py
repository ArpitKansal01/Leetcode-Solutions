# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution(object):
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        if isBadVersion(1)==True:
            return 1
        left=1
        right=n
        while(left<=right):
            mid=left+((right-left)//2)
            if isBadVersion(mid)==True and isBadVersion(mid-1)==False:
                return mid
            elif isBadVersion(mid)==True and isBadVersion(mid-1)==True:
                right=mid-1
            else:
                left=mid+1