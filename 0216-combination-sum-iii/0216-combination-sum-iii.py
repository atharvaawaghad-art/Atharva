class Solution(object):
    def backtrack(self,last,total,subset,k,n,result):
        if total==n and len(subset)==k:
            result.append(subset[:])
            return
        if total>n or len(subset)>k:
            return
        for i in range(last,10):
            Sum=total+i
            subset.append(i)
            self.backtrack(i+1,Sum,subset,k,n,result)
            subset.pop()
    def combinationSum3(self, k, n):
        result=[]
        self.backtrack(1,0,[],k,n,result)
        return result
        
        