class Solution(object):
    def oddEvenList(self,head):
        if head is None or head.next is None:
            return head
        temp=head
        mylist=[]
        while temp:
            mylist.append(temp.val)
            if temp.next:
                temp=temp.next.next
            else:
                temp=None
        temp=head.next
        while temp:
            mylist.append(temp.val)
            if temp.next:
                temp=temp.next.next
            else:
                temp=None
        temp=head
        index=0
        while temp:
            temp.val=mylist[index]
            index+=1
            temp=temp.next
        return head