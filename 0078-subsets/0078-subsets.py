class Solution(object):
    def subsets(self, nums):
        n=len(nums)
        result=[]
        total_subset=1<<n
        for i in range(0,total_subset):
            lst=[]
            for j in range(0,n):
                if i&(1<<j)!=0:
                    lst.append(nums[j])
            result.append(lst) 
        return result       