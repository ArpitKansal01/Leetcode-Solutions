class Solution(object):
    def countGoodSubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        count=0
        for i in range(0,len(s)-2):
            subStr=""
            notDuplicate=True
            for j in range(0,3):
                if s[i+j] in subStr:
                    notDuplicate=False
                subStr+=s[i+j]
            if notDuplicate:
                count+=1
        return count