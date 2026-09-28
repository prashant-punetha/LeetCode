class Solution(object):
    def runningSum(self, nums):
        sum=nums[0]
        for i in range(1,len(nums)):
            nums[i]+=sum
            sum=nums[i]
        return nums
        
        