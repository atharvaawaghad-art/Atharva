class Solution(object):
    def rotate(self, matrix):
        n=len(matrix)
        for i in range(0,n-1):
            for j in range(i+1,n):
                matrix[i][j],matrix[j][i]=matrix[j][i],matrix[i][j]
        for i in range(0,n):
            matrix[i].reverse()
        