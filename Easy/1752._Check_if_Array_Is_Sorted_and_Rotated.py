class Solution(object):
    def check(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        count=0
        for i in range(0, len(nums)):
            if nums[i] > nums[(i+1)%len(nums)]:
                count+=1
                if count>1:
                    return False
        return True
        
