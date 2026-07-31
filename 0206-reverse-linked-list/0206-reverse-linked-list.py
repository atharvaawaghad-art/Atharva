class Solution(object):
    def reverseList(self, head):
        temp=head
        prev=None
        while temp is not None:
            front=temp.next
            temp.next=prev
            prev=temp
            temp=front
        return prev
        
        