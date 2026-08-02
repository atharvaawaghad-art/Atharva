class Solution(object):
    def removeNthFromEnd(self, head, n):
        temp=head
        l=0
        while temp is not None:
            l+=1
            temp=temp.next
        if l==n:
            new_head=head.next
            return new_head
        pts=l-n
        temp=head
        count=1
        while count<pts:
            count+=1
            temp=temp.next
        temp.next=temp.next.next
        return head

        
        