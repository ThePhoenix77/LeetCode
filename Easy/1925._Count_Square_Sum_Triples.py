class Solution:
    def countTriples(self, n: int) -> int:
        count = 0
        for a in range(1, n + 1):
            for b in range(1, n + 1):     
                csq = a**2 + b**2
                c = math.isqrt(csq)
                if c*c == csq and c <=n and a > 0 and b > 0:
                    count += 1
        return count       

