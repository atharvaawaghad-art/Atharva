class Solution(object):
    def lengthOfLongestSubstring(self, s):
        last = {}
        left = 0
        ans = 0
        for right in range(len(s)):
            if s[right] in last and last[s[right]] >= left:
                left = last[s[right]] + 1
            last[s[right]] = right
            ans = max(ans, right - left + 1)
        return ans