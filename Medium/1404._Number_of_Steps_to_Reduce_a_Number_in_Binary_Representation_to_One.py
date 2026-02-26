class Solution:
    # def binconv(self, s: str) -> int:
    #     ans = 0
    #     for dig in s:
    #         ans = ans * 2 + int(dig)
    #     return ans
    def numSteps(self, s: str) -> int:
        ans = 0
        num = int(s, 2)
        while(num != 1):
            if(num % 2 == 0):
                num //= 2
            else:
                num += 1
            ans = ans + 1
        return ans
        
