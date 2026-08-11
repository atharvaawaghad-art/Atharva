class Solution(object):
    def sortList(self,head):
        if head is None or head.next is None:
            return head
        slow=head
        fast=head.next
        while fast and fast.next:
            slow=slow.next
            fast=fast.next.next
        mid=slow.next
        slow.next=None
        left=self.sortList(head)
        right=self.sortList(mid)
        dummy=ListNode(0)
        temp=dummy
        while left and right:
            if left.val<right.val:
                temp.next=left
                left=left.next
            else:
                temp.next=right
                right=right.next
            temp=temp.next
        if left:
            temp.next=left
        else:
            temp.next=right
        return dummy.next 