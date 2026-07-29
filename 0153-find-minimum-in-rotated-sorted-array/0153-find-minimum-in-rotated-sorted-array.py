class Solution(object):
    def findMin(self, nums):
        mini=float("inf")
        for i in range(len(nums)):
            mini=min(nums[i],mini)
        return mini
        
        