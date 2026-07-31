class Solution(object):
    def hasCycle(self, head):
        temp=head
        myset=set()
        while temp is not None:
            if temp in myset:
                return True
            myset.add(temp)
            temp=temp.next
        return False
        
        