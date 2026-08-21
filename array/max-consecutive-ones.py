class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        cc=0
        i=0
        maxc=0
        for num in nums:
            if num==1:
                cc+=1
            else:
                cc=0
                
            maxc=max(cc,maxc)
        return maxc