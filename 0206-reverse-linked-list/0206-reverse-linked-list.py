class Solution(object):
    def reverseList(self, head):
        temp=head
        stack=[]
        while temp is not None:
            stack.append(temp.val)
            temp=temp.next
        temp=head
        while temp is not None:
            e=stack.pop()
            temp.val=e
            temp=temp.next
        return head
        
        