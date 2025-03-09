class Solution(object):
    def rotate(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        l1=[]
        for i in range(0,len(matrix)):
            l2=[]
            for j in range(0,len(matrix)):
                l2.append(matrix[j][i])
            l1.append(l2)
        for i in range(0,len(l1)):
            l1[i].reverse()
        for i in range(0,len(matrix)):
            matrix[i]=l1[i]