class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        if(s.count("01") >= 1):
            return False
        return True
