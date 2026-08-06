class Solution(object):
    def isValid(self, s):
        stack=[]
        for ch in s:
            if ch=="(" or ch=="{" or ch=="[":
                stack.append(ch)
            else:
                if not stack:
                    return False
                if ch==")" and stack[-1]!="(":
                    return False
                if ch=="}" and stack[-1]!="{":
                    return False
                if ch=="]" and stack[-1]!="[":
                    return False
                stack.pop()
        if len(stack)==0:
            return True
        else:
            return False
        
        