class Solution(object):
    def deleteDuplicates(self,head):
        if head is None:
            return head
        temp=head
        while temp and temp.next:
            if temp.val==temp.next.val:
                temp.next=temp.next.next
            else:
                temp=temp.next
        return head