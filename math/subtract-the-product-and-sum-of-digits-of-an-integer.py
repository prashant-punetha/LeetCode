class Solution(object):
    def subtractProductAndSum(self, n):
        prod=1
        sum=0
        while(n>0):
            d=n%10
            prod*=d
            sum+=d
            n/=10
        return prod-sum        