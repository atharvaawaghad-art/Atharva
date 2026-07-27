class Solution(object):
    def searchRange(self, nums, target):
        n=len(nums)
        first=-1
        last=-1
        left=0
        right=n-1
        while left<=right:
            mid=(left+right)//2
            if nums[mid]==target:
                first=mid
                right=mid-1
            elif nums[mid]<target:
                left=mid+1
            else:
                right=mid-1
        left=0
        right=n-1
        while left<=right:
            mid=(left+right)//2
            if nums[mid]==target:
                last=mid
                left=mid+1
            elif nums[mid]<target:
                left=mid+1
            else:
                right=mid-1
        return [first,last]
                




        
        