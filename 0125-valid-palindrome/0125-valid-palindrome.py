class Solution(object):
    def isPalindrome(self, s):
        temp=""
        for ch in s:
            if ch.isalnum():
                temp+=ch.lower()
        if temp==temp[::-1]:
            return True
        else:
            return False        

        
        