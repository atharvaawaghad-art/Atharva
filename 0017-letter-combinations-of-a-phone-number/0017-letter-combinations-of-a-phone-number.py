class Solution(object):
    def solve(self,index,subset,digits,phone,result):
        if index>=len(digits):
            result.append("".join(subset))
            return
        for ch in phone[digits[index]]:
            subset.append(ch)
            self.solve(index+1,subset,digits,phone,result)
            subset.pop()
    def letterCombinations(self, digits):
        result=[]
        phone = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz"
        }
        self.solve(0,[],digits,phone,result)
        return result
        