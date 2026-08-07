class Solution(object):
    def majorityElement(self, nums):
        count=0
        curr=0
        for num in nums:
            if count==0:
                curr=num
            if num==curr:
                count+=1
            else:
                count-=1
        return curr
        