class Solution(object):
    def findPeakElement(self, nums):
        max=nums[0]
        for i in nums:
            if nums[i]>max:
                max=nums[i]
                index=i
        return index

