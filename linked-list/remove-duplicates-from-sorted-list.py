# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def deleteDuplicates(self, head):
        if head==None:
            return None
        p1=head
        while(p1!=None and p1.next!=None):
            if(p1.val==p1.next.val):
                p1.next=p1.next.next
            else:
                p1=p1.next
        return head
       
        