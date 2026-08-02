class Solution(object):
    def removeNthFromEnd(self, head, n):
        slow=head 
        fast=head
        for _ in range(n):
            fast=fast.next
        if fast==None:
            return head.next
        while fast.next is not None:
            slow=slow.next
            fast=fast.next
        slow.next=slow.next.next
        return head

        
        