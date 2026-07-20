class Solution(object):
    def rearrangeArray(self, nums):
        positive = []
        negative = []
        for i in range(len(nums)):
            if nums[i] > 0:
                positive.append(nums[i])
            else:
                negative.append(nums[i])
        for i in range(len(positive)):
            nums[2*i]=positive[i]
            nums[2*i+1]=negative[i]
        return nums