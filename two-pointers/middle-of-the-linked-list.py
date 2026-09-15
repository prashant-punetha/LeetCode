# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def middleNode(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        p1=head
        count=0
        p2=head
        while(p1.next!=None):
            count+=1
            p1=p1.next

        mid=count/2
        for i in range(1,mid+1):
            p2=p2.next
            
        if count %2==0:
            return p2
        return p2.next
           
        