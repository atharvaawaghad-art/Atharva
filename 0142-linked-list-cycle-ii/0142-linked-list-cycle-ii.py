class Solution(object):
    def detectCycle(self, head):
        temp=head
        myset=set()
        while temp is not None:
            if temp not in myset:
                myset.add(temp)
            else:
                return temp
            temp=temp.next
                    

        
        