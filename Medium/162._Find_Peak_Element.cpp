class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans;
        int n=nums.size();
        if(n==1 || nums[0]>nums[1]) return 0;
        else if(nums[n-1]>nums[n-2]) return n-1;
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) ans=i;
        }
        return ans;
    }
};
