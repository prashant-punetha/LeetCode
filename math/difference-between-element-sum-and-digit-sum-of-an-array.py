class Solution(object):
    def differenceOfSum(self, nums):
        n = len(nums)
        esum = 0
        dsum = 0
        
       
        for i in range(n): 
            esum += nums[i]
            
            
            val = nums[i] 
            while val > 0:
                dsum += val % 10
                val //= 10                  
        return abs(esum - dsum)
