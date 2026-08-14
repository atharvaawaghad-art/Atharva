class Solution(object):
    def lengthOfLongestSubstring(self, s):
        left=0
        count=0
        myset=set()
        for right in range(len(s)):
            while s[right] in myset:
                myset.remove(s[left])
                left+=1
            myset.add(s[right])
            count=max(count,right-left+1)
        return count

        