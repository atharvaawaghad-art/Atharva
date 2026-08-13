class Solution(object):
    def solve(self,col,board,ans,n):
        if col==n:
            ans.append(list(board))
            return
        for row in range(n):
            if self.safe(row,col,board,n):
                board[row]=board[row][:col]+"Q"+board[row][col+1:]
                self.solve(col+1,board,ans,n)
                board[row]=board[row][:col]+"."+board[row][col+1:]
    def safe(self,row,col,board,n):
        duprow=row
        dupcol=col
        while row>=0 and col>=0:
            if board[row][col]=="Q":
                return False
            row-=1
            col-=1
        row=duprow
        col=dupcol
        while col>=0:
            if board[row][col]=="Q":
                return False
            col-=1
        row=duprow
        col=dupcol
        while row<n and col>=0:
            if board[row][col]=="Q":
                return False
            row+=1
            col-=1
        return True
    def solveNQueens(self, n):
        ans=[]
        board=["."*n for _ in range(n)]
        self.solve(0,board,ans,n)
        return ans
        
        