class Solution(object):
    def middleNode(self, head):
        count=0
        temp=head
        while temp:
            count+=1
            temp=temp.next
        middle=count//2
        temp=head
        while middle>0:
            temp=temp.next
            middle-=1
        return temp