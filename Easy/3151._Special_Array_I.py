class Solution(object):
    def isArraySpecial(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        ans=True
        state=nums[0]%2
        for i in range(1, len(nums)):
            tmp=nums[i]%2
            if tmp==state:
                ans=False
                break
            state=tmp
        return ans
