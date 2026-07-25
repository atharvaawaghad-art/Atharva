class Solution(object):
    def threeSum(self, nums):
        n=len(nums)
        result=set()
        for i in range(0,n):
            myset=set()
            for j in range(i+1,n):
                third=-(nums[i]+nums[j])
                if third in myset:
                    temp=[nums[i],nums[j],third]
                    temp.sort()
                    result.add(tuple(temp))
                myset.add(nums[j])
        return [list(ans) for ans in result]        