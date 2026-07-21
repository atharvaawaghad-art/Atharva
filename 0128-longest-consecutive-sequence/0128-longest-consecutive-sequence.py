class Solution(object):
    def longestConsecutive(self, nums):
        n=len(nums)
        myset=set()
        for i in range(0,n):
            myset.add(nums[i])
        longest=0
        for num in myset:
            if num-1 not in myset:
                x=num
                count=1
                while x+1 in myset:
                    count+=1
                    x+=1
                longest=max(longest,count)
        return longest
        

        