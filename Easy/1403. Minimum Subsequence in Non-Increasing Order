class Solution {
public:
    int vsum(vector<int> t){
        int sum=0;
        for(int i=0;i<t.size();i++) sum+=t[i];
        return sum;
    }
    vector<int> minSubsequence(vector<int>& nums) {
        if(nums.size()<=1) return nums;
        vector<int> res;
        sort(nums.begin(), nums.end());
        int sum=0;
        int index;
        for(int i=nums.size()-1;i>=0;i--){
            index;
            sum+=nums[i];
            if(sum>vsum(nums)-sum){
                index=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=index;i--) res.push_back(nums[i]);
        // res.push_back(nums[nums.size()-1]);
        // for(int i=nums.size()-1;i>=0;i--){
        //     if(nums[i]<vsum(nums)-vsum(res)){
        //         res.push_back(nums[i]);
        //     }
        //     else break;
        // }
        // res.erase(res.begin() + 1);
        return res;
    }
};
