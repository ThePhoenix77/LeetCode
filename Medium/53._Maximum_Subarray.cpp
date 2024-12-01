class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int current_sum=0;
        int max_sum=INT_MIN;

        for(int i=0;i<n;i++){
            current_sum = max(nums[i], current_sum + nums[i]);
            max_sum = max(max_sum, current_sum);
        }
        return max_sum;
    }
};
