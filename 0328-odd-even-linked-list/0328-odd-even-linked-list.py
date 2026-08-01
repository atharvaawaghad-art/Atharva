class Solution(object):
    def oddEvenList(self,head):
        if head is None or head.next is None:
            return head
        odd=head
        even=head.next
        evenhead=even
        while even is not None and even.next is not None:
            odd.next=odd.next.next
            odd=odd.next
            even.next=even.next.next
            even=even.next
        odd.next=evenhead
        return head
