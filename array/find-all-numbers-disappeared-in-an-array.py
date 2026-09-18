class Solution(object):
    def findDisappearedNumbers(self, nums):
        ans=[]
        for i in range(1,len(nums)+1):
            if not i in nums:
                ans.append(i)
        return ans