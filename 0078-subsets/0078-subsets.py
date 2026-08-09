class Solution(object):
    def subsets(self, nums):
        result=[]
        lst=[]
        def solve(i):
            if i==len(nums):
                result.append(lst[:])
                return
            lst.append(nums[i])
            solve(i+1)
            lst.pop()
            solve(i+1)
        solve(0)
        return result
              