class Solution(object):
    def findMissingElements(self, nums):
        if not nums:
            return []
      

        ans = []
        numset = set(nums)

        for i in range(min(nums), max(nums) + 1):
            if i not in numset:
                ans.append(i)

        return ans