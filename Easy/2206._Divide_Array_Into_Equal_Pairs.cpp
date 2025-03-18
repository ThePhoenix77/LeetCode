class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i+=2)
            if(i+1>=nums.size() || nums[i]!=nums[i+1]) return false;
        return true;
    }
};
