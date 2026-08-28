class Solution(object):
    def numberOfEmployeesWhoMetTarget(self, hours, target):
        count=0
        n=len(hours)
        for i in range(n):
            if hours[i]>=target:
                count+=1
        return count
        