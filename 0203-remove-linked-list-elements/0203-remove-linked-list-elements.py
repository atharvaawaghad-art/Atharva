class Solution(object):
    def removeElements(self,head,val):
        if head is None:
            return None
        temp=head
        prev=None
        new_head=head
        while temp:
            if temp.val==val:
                if prev is None:
                    new_head=temp.next
                else:
                    prev.next=temp.next
            else:
                prev=temp
            temp=temp.next
        return new_head