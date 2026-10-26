class Solution(object):
    def longestConsecutive(self, nums):
        if not nums:
            return 0

        nums.sort()
        counter = 1
        longest = 1

        for i in range(len(nums) - 1):
            if nums[i] == nums[i + 1]:
                continue
            elif nums[i] + 1 == nums[i + 1]:
                counter += 1
            else:
                counter = 1

            longest = max(longest, counter)

        return longest
        