class Solution(object):
    def maxProduct(self, nums):
            first=float("-inf")
            second=float("-inf")
            for i in range(len(nums)):
                if nums[i]>first:
                    second=first
                    first=nums[i]
                elif nums[i]>second:
                    second=nums[i]
            return (first-1)*(second-1)