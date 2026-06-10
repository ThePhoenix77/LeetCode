class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        vector<int> tmp;
        for(int i=0;i<n;i++) if(nums[i]!=val) tmp.push_back(nums[i]);
        nums=tmp;
        return nums.size();
    }
};
