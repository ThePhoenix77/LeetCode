class Solution {
public:
    int min_index(vector<int>& nums){
        int n=nums.size();
        int min=nums[0];
        int ans=0;
        for(int i=1;i<n;i++){
            if(nums[i]<min) {min=nums[i];ans=i;}
        }
        return ans;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
       for(int i=0;i<k;i++){
            int m=min_index(nums);
            nums[m]*=multiplier;
       }
       return nums;
    }
};
