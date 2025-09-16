class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ucount=1;
        for(int i=1;i<nums.size();++i) {
            if(nums[i]!=nums[i-1]) nums[ucount++]=nums[i];
        }
        return ucount;
    }
};

// other approach(life is easy don't complicate it)
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        vector<int> tmp(s.begin(), s.end());
        nums = tmp;
        return nums.size();
    }
};*/
