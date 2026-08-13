class Solution(object):
    def solve(self,col,board,leftrow,upperdiagonal,lowerdiagonal,result,n):
        if col==n:
            result.append(board[:])
            return
        for row in range(n):
            if leftrow[row]==0 and upperdiagonal[(n-1)+(col-row)]==0 and lowerdiagonal[row+col]==0:
                board[row]=board[row][:col]+"Q"+board[row][col+1:]
                leftrow[row]=1
                upperdiagonal[(n-1)+(col-row)]=1
                lowerdiagonal[row+col]=1
                self.solve(col+1,board,leftrow,upperdiagonal,lowerdiagonal,result,n)
                board[row]=board[row][:col]+"."+board[row][col+1:]
                leftrow[row]=0
                upperdiagonal[(n-1)+(col-row)]=0
                lowerdiagonal[row+col]=0
    def solveNQueens(self, n):
        result=[]
        board=["."*n for _ in range(n)]
        leftrow=[0]*n
        upperdiagonal=[0]*(2*n-1)
        lowerdiagonal=[0]*(2*n-1)
        self.solve(0,board,leftrow,upperdiagonal,lowerdiagonal,result,n)
        return result
        
        
        