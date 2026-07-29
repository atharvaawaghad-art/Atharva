class Solution(object):
    def findMin(self, nums):
        left,right=0,len(nums)-1
        mini=float("inf")
        while left<=right:
            if nums[left]<=nums[right]:
                return min(mini,nums[left])
            mid=(left+right)//2
            mini=min(mini,nums[mid])
            if nums[right]>=nums[mid] and nums[mid]<=nums[left]:
                right=mid-1
            else:
                left=mid+1
        return mini