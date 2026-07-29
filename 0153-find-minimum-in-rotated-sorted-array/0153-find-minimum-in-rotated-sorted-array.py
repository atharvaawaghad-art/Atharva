class Solution(object):
    def findMin(self, nums):
        mini=float("inf")
        for i in range(len(nums)):
            if nums[i]<mini:
                mini=nums[i]
        return mini
        
        