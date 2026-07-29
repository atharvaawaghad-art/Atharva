class Solution(object):
    def findMin(self, nums):
        left,right=0,len(nums)-1
        mini=float("inf")
        while left<=right:
            mid=(left+right)//2
            if nums[mid]>=nums[left]:
                mini=min(nums[left],mini)
                left=mid+1
            else:
                mini=min(nums[mid],mini)
                right=mid-1
        return mini