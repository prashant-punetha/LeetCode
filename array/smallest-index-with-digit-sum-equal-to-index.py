class Solution(object):
    def smallestIndex(self, nums):
        if not nums:
            return -1
        for i in range(len(nums)):
            x=nums[i]
            digitsum=0
            while x>0:
                digitsum+=x%10
                x//=10
            if(digitsum==i):
                return i
        return -1